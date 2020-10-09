import sys

option = input("Enter e for encryption, d for decryption : ")
if (option == 'e' or option == 'E'):
    key = int(input("Enter number of digits to be shifted (key) : "))
    plaintxt = input("Enter plaintext : ")
    plaintxt = plaintxt.lower()
    print("cipher = ",end = '') 
    for ch in plaintxt:
        if(ch == ' '):
            print(' ' , end = '')
        elif(ord(ch)+key > 122):
            print(chr(ord(ch)+key-26),end = '')
        else:
            print(chr(ord(ch)+key),end = '')

elif (option == 'd' or option =='D'):
    key = int(input("Enter key : "))
    code = input("Enter cipher : ")
    print("plaintext = ",end = '')
    for ch in code:
        if(ch == ' '):
            print(' ',end = '')
        elif(ord(ch)-key < 97):
            print(chr(ord(ch)-key+26),end = '')
        else:
            print(chr(ord(ch)-key),end = '')

else:
    print("Error!! exiting...")
    time.sleep(5)
    sys.exit()
