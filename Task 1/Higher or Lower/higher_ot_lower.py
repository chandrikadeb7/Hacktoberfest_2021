import random
import csv
import datetime
from time import sleep



def Intro():
    #Intoduction
    print("HIGHER OR LOWER")
    sleep(2)
    print("##-RULES-##")
    print("The Computer will generator a random number based on the level you selected.")
    sleep(2)
    print("You have to guess the number before your chances get over.")
    sleep(2)
    print("If the number you guessed is more than that of the generated number it would say lOWER")
    sleep(3)
    print("If the number you guessed is less than that of the generated number it would say HIGHER")
    sleep(3)   

def easyLevel():
    #Easy Level
    print("EASY LEVEL")
    sleep(1)
    print("Numbers between 1-10")
    sleep(1)
    print("No of Chances 3")
    sleep(1)

    rand_no = random.randint(1,10)
    n = 0

    while n <= 2:
        print("-----------------------")
        sleep(0.8)
        n += 1
        user_input = int(input("Guess the number: "))
        if user_input < rand_no:
            print("Higher")

        elif user_input > rand_no:
            print("Lower")

        elif user_input == rand_no:
            print("Congratulations!! You guessed the number!!")

            if n == 1:
                score = 100
                remark = ("DAMN!! That was fast " + playerName)
            elif n == 2:
                score = 50
                remark = ("Not bad " + playerName)
            elif n == 3:
                score = 20
                remark = ("oof!! that was close " + playerName)

            totalscore = str(score)
            print("The number of chances you took to guess correctly is " + str(n))
            sleep(1)
            print(remark)
            sleep(1)
            print("Your Score in Easy level is " + totalscore) 

            #CSV write
            easyfile = open("Score/Easylevelscore.csv","a", newline='', encoding='utf-8')
            writer = csv.writer(easyfile)
            data = [playerName, timestamp, totalscore]
            writer.writerow(data)
            easyfile.close()

            break

        while n == 3:
            
            print("Oops.. You cloud'nt find the number..")
            sleep(1)
            print("No probs.. Try again " + playerName)
            sleep(1)
            print("The Number was " + str(rand_no))
            break
        
def mediumLevel():
    #Medium Level
    print("MEDIUM LEVEL")
    sleep(1)
    print("Numbers between 1-20")
    sleep(1)
    print("No of Chances 5")
    sleep(1)

    rand_no = random.randint(1,20)
    n = 0

    while n <= 4:
        print("-----------------------")
        sleep(0.8)
        n += 1
        user_input = int(input("Guess the number: "))
        if user_input < rand_no:
            print("Higher")

        elif user_input > rand_no:
            print("Lower")

        elif user_input == rand_no:
            print("Congratulations!! You guessed the number!!")

            if n == 1:
                score = 200
                remark = ("DAMN!! That was fast " + playerName)
            elif n == 2:
                score = 150
                remark = ("WoW!! that was Great " + playerName)
            elif n == 3:
                score = 100
                remark = ("Not Bad " + playerName)
            elif n == 4:
                score = 50
                remark = ("Mm.. Finally you got it " + playerName)
            elif n == 5:
                score = 20
                remark = ("oof!! that was close " + playerName)
            

            totalscore = str(score) 
            print("The number of chances you took to guess correctly is " + str(n))
            sleep(1)
            print(remark)
            sleep(1)
            print("Your Score in Medium level is " + totalscore) 

            #CSV write
            easyfile = open("Score/Mediumlevelscore.csv","a", newline='', encoding='utf-8')
            writer = csv.writer(easyfile)
            data = [playerName, timestamp, totalscore]
            writer.writerow(data)
            easyfile.close()

            break

        while n == 5:
            print("Oops.. You cloud'nt find the number..")
            sleep(1)
            print("No probs.. Try again " + playerName)
            sleep(1)
            print("The Number was " + str(rand_no))
            break
        
def hardLevel():
    #Hard Level
    print("Hard LEVEL")
    sleep(1)
    print("Numbers between 1-30")
    sleep(1)
    print("No of Chances 8")
    sleep(1)

    rand_no = random.randint(1,30)
    n = 0

    while n <= 7:
        print("-----------------------")
        sleep(0.8)
        n += 1
        user_input = int(input("Guess the number: "))
        if user_input < rand_no:
            print("Higher")

        elif user_input > rand_no:
            print("Lower")

        elif user_input == rand_no:
            print("Congratulations!! You guessed the number!!")

            if n == 1:
                score = 350
                remark = ("Damn!! Wow!! You are really lucky.. " + playerName)
            elif n == 2:
                score = 300
                remark = ("Wow! You found the number.. " + playerName)
            elif n == 3:
                score = 250
                remark = ("Awesome " + playerName + " you found the number")
            elif n == 4:
                score = 200
                remark = ("Goodone " + playerName )
            elif n == 5:
                score = 150
                remark = ("Yes!! you found the number correctly " + playerName)
            elif n == 6:
                score = 100
                remark = ("Not Bad " + playerName)
            elif n == 7:
                score = 50
                remark = ("Mm.. Finally you got it " + playerName)
            elif n == 8:
                score = 20
                remark = ("oof!! that was close " + playerName)
            
            totalscore = str(score) 
            print("The number of chances you took to guess correctly is " + str(n))
            sleep(1)
            print(remark)
            sleep(1)
            print("Your Score in Hard Level is " + totalscore) 

            #CSV write
            easyfile = open("Score/Hardlevelscore.csv","a", newline='')
            writer = csv.writer(easyfile)
            data = [playerName, timestamp, totalscore]
            writer.writerow(data)
            easyfile.close()

            break

        while n == 8:
            print("Oops.. You cloud'nt find the number..")
            sleep(1)
            print("No probs.. Try again " + playerName)
            sleep(1)
            print("The Number was " + str(rand_no))
            break

def EasyScore_Show():
    #Easy Level Score table show
    scoreFile = open("Score/Easylevelscore.csv","r")
    scoreReader = csv.reader(scoreFile)
    print("EASY LEVEL SCORES")
    print("-x-x-x-x-x-x-x-x-")
    sleep(1)
    max_score = []
    for data in scoreReader:
        max_score.append(data[2])
        print(data)
    high = max(max_score)
    highscorefile = open("Score/Easylevelscore.csv","r")
    highscoreReader = csv.reader(highscorefile)
    for i in highscoreReader:
        if i[2] == high:       
            print("-x-x-x-x-x-x-x-x-")
            print("High Score in Easy Level is " + str(i[2] + " by " + str(i[0] )))
    scoreFile.close()

def MediumScore_Show():
    #Medium Level Score table show
    scoreFile = open("Score/Mediumlevelscore.csv","r")
    scoreReader = csv.reader(scoreFile)
    print("MEDIUM LEVEL SCORES")
    print("-x-x-x-x-x-x-x-x-")
    sleep(1)
    max_score = []
    for data in scoreReader:
        max_score.append(data[2])
        print(data)
    high = max(max_score)
    highscorefile = open("Score/Mediumlevelscore.csv","r")
    highscoreReader = csv.reader(highscorefile)
    for i in highscoreReader:
        if i[2] == high:       
            print("-x-x-x-x-x-x-x-x-")
            print("High Score in Medium Level is " + str(i[2] + " by " + str(i[0] )))
    scoreFile.close()

def HardScore_Show():
    #Medium Level Score table show
    scoreFile = open("Score/Hardlevelscore.csv","r")
    scoreReader = csv.reader(scoreFile)
    print("HARD LEVEL SCORES")
    print("-x-x-x-x-x-x-x-x-")
    sleep(1)
    max_score = []
    for data in scoreReader:
        max_score.append(data[2])
        print(data)
    high = max(max_score)
    highscorefile = open("Score/Hardlevelscore.csv","r")
    highscoreReader = csv.reader(highscorefile)
    for i in highscoreReader:
        if i[2] == high:       
            print("-x-x-x-x-x-x-x-x-")
            print("High Score in Hard Level is " + str(i[2] + " by " + str(i[0] )))
    scoreFile.close()

def scoreTable():
    level = input("Which level's scores would you like to see? (1/2/3) ")
    sleep(1)
    if level == "1":
        EasyScore_Show()
    elif level == "2":
        MediumScore_Show()
    elif level == "3":
        HardScore_Show()
    else :
        print("Wrong Input..")
    
#Main Code

#Time
time = datetime.datetime.now()
#Day Month Year 
timestamp = str((time.strftime("%d ""%b ""%Y" )))

print("HIGHER OR LOWER")
print("-X-X-X-X-X-X-X-")
sleep(1)
print("MODES")
sleep(1)
print("1.Play the Game")
sleep(1)
print("2.See the Scores")

mode = input("What would like to choose (1/2): ")
#Play Game
if mode == "1":

    playerName = input("Enter your name: ")
    intro_check = input("Would like to see the RULES? (y/n) ")
    if intro_check == "y":
        Intro()
    elif intro_check == "n":
        pass
    
    print("##-Levels-##")
    sleep(1)
    print("1.Easy Level - Number between 1-10 and 3 Chances")
    print("2.Medium Level - Number between 1-20 and 5 Chances")
    print("3.Hard Level - Number between 1-30 and 8 Chances")
    print("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-")
    sleep(1)

    level = input("Choose the level: ")
    sleep(1)
    if level == "1":
        easyLevel()
    elif level == "2":
        mediumLevel()
    elif level == "3":
        hardLevel()
    else :
        print("Wrong input.. Try again")

   
    csvPrint = input("Would you like to see the scores? (y/n) ")
    if csvPrint == "y":
        scoreTable()
    elif csvPrint == "n":
        pass
    else:
        print("Wrong input")

    sleep(1)
    print("Hope you liked playing my small game " + playerName)

#Show Score
elif mode == "2":
    scoreTable()

#END
