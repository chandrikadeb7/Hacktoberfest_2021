import pickle
from dateparser.search import search_dates
import re
import pymysql


#change the database configuration as required
mydb = pymysql.connect(
  host="localhost",
  user="root",
  passwd="mysql",
  database="finaldb"
)


print(mydb)

mycursor = mydb.cursor()

#uncomment these while u run for the first time

#mycursor.execute("CREATE DATABASE mydatabase")
#mycursor.execute("CREATE TABLE scraper (subject VARCHAR(255), event VARCHAR(255), date VARCHAR(255))")

mycursor.execute("DELETE FROM scraper")

#mycursor.execute("CREATE TABLE scraper (id int NOT NULL AUTO_INCREMENT primary key,subject VARCHAR(255), event VARCHAR(255), date VARCHAR(255))")

print()
print()
print()
print()
with open("test1.txt", "rb") as fp:
    b = pickle.load(fp)


print(b)

actual_message = []



def process():
    for messages in b:
        dummy = messages
        a = dummy.split('\n')
        if len(a) >= 3:
                        actual_message.append(messages.replace(a[-1],' '))
        else:
            actual_message.append(messages.replace(a[-1],' '))

process()
for i in actual_message:
        
        event = r'(test|lab|fee|payment)'
        day = r'(mon|tue|wed|thu|fri|sat|jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec|next.*week|next.*month)'
        time = r'([0-9]:[0-9]+|[0-9]+.[0-9]+).*(am|pm)'
        Subject = r'(\bss|\bsystem software|\bml|\bmachine learning|\bjava|\bjava)'
        date = r'(\b[0-9]+(th|rd|th|st))'
        eventr = set(re.findall(event,i.lower())) 
        dayr = set(re.findall(day,i.lower()))
        timer = list(set(re.findall(time,i.lower())))
        Subjectr = set(re.findall(Subject,i.lower()))
        dater = list(set(re.findall(date,i.lower())))
        
        Subjectstr = " ".join(Subjectr)
        eventstr = " ".join(eventr)
        daystr = " ".join(dayr)
      
       

        if len(eventr) and len(dayr) and len(Subjectr) :
            # print(dater)
            print('Subject :' + Subjectstr +" "+ eventstr)
            

            print('Day :', daystr,end = " ") 
            if len(dater):
                print("".join(dater[0][0]))
            if len(timer):
            
                print('Time :'," ".join(timer[0]))
            print()
            print()


a=[]
for i in b:
    a.append(i.split('\n'))

print(a)

sql = "INSERT INTO scraper (subject,event,date,dept) VALUES (%s, %s, %s,'ISE')"



print(mycursor.rowcount, "record inserted.")

val = []
for s in a[0]:
        event = re.findall(r'lab test|lab internal|fee payment|fees|presentation|report',s.lower())
        sub = re.findall(r'SS|Java|OOADP|java|ss|ooadp|ml|payment|component',s.lower())
        dates = search_dates(s.lower())
        if len(event) and len(sub) and dates is not None:
            print("Event:",event[0])
            print("Subject",sub[0])
            #print("Dates:",dates)
            for f in dates:
                time = re.findall(r'am|pm',f[0].lower())
                day = re.findall(r'mon|tue|wed|thur|fri|sat|sun|jan|feb|mar|apr|may|jun|july|aug|sept|oct|nov|dec',f[0].lower())
                if time != '' or day !='':
                    print("When:",f[0])
                    val.append((sub[0],event[0],f[0]))
                    print()
                    break
                print()  
                
print("hello")
print(val)
mycursor.executemany(sql, val)

mydb.commit()   
chatbot = []
for i in b:
    i.replace('\n',' ')
    chatbot.append(i)


with open("test2.txt", "wb") as fp:
    pickle.dump(chatbot, fp)
