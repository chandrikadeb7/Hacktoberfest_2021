import numpy as np
import pandas as pd
######################### CREATING THE CYPHER MATRIC#################################
alp=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',]
list2=[]
z=0
for i in range(26):
    list1=[]
    for k in range(26):
        if(i==26):
            z=i
            i=0
        list1.append(alp[i])
        i=i+1
    i=z
    list2.append(list1)
df=pd.DataFrame(list2,columns=alp, index=alp)
#print(df)
#####################################################################################
#row=[]
#col=[]
#list5=[]
#wordlist_final=[]
def cipher(keyword):
    list3=[]
    list4=[]
    z=0
    count=1
    plaintext=input('Enter plaintext:')
    len_text=len(plaintext)
    len_word=len(keyword)

    for i in range(len_text):
        for j in range(len_word):
            if(count<=len_text):
                list3.append(keyword[j])
                count+=1
            
    #for finding the cyphered word

    for i in range(len_text):
        list4.append(df[plaintext[i]][list3[i]])
    word=''.join(list4)
    print('Cyphered word is:',word)
    return
     
def decipher(keyword):
    inp=input('Enter the word to be decyphered:')
    list6=[]
    list5=[]
    count=1
    for i in range(len(inp)):
        for j in range(len(keyword)):
                if(count<=len(inp)):
                    list5.append(keyword[j])
                    count+=1
    for i in range(len(list5)):
        for j in range(26):
            if(str(df[list5[i]][alp[j]])==str(inp[i])):
                list6.append(alp[j])
    og_list=''.join(list6)            
    print('The deciphered word is:',og_list)
    return
    
################################## MAIN CODE STARTS HERE ##########################    
keyword=input('Enter the key:')
variable=int(input('Menu driven code for Vigenère Cipher\nChoose any of the following:\n1.Cipher\n2.De-Cipher\n'))
if(variable==1):
    cipher(keyword)
elif(variable==2):
    decipher(keyword)
else:
    print('Wrong input, try again!')
    
    
