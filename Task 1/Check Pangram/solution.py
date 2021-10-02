import string

def is_pangram(sentence):
    alphabet = string.ascii_lowercase
    sentence.lower()
    for i in alphabet:
        if(i not in sentence):
            return False
    return True