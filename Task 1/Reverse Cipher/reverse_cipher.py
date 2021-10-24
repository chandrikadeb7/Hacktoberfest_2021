''' 
Aim : The user enters a string , to implement 
Reverse Cipher on the inputted string.
'''
#Reverse Cipher function to reverse the inputted string
def revers_cipher(input_string):
    #return the reversed string
    return input_string[::-1]

#getting input from the user
input_string = input('Enter the string which you would like to encrypt or decrypt : ')

#printing the output
print('The inputted String was ',input_string)
print('Reversed String is ', revers_cipher(input_string))

'''
Note : Since in reverse Cipher the working remains the same. i.e to reverse the 
       inputted string , hence we haven't segregated encryption and decryption as inputs.
'''

'''
Sample input  : ok so it is cool
Sample output : looc si ti os ko
Explaination:
The user enters either an encrypted/decrypted string . 
After the user has provided the input the variable in which the string 
is stored is passed onto a Revers_cipher function.
The Revers_cipher function reverses the string and returns the reversed string.
'''
