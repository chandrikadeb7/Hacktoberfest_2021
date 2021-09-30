# Function to test balanced brackets
def BalancedBrackets(Str):
    # stack(list object) for storing opening brackets
    stack = []

    # Loop for checking string 
    for char in Str:
        # if its opening bracket, so push it in the 
        # stack
        if char == '{' or char == '(' or char == '[':
            stack.append(char) # push
        # else if its closing bracket then
        # check if the stack is empty then return false or
        # pop the top most element from the stack
        # and compare it
        elif char == '}' or char == ')' or char == ']':
            if len(stack) == 0:
                return False
            top_element = stack.pop() # pop
            # function to compare whether two 
            # brackets are corresponding to each other
            if not Compare(top_element, char):
                return False
    # lastly, check that stack is empty or not  
    if len(stack) != 0:
        return False
              
    return True

# Function to check two corresponding brackets
# equal or not. 
def Compare(opening, closing):
    if opening == '(' and closing == ')':
        return True
    if opening == '[' and closing == ']':
        return True
    if opening == '{' and closing == '}':
        return True  
    return False



# Test function 
print(BalancedBrackets("{123(456[.768])}"))
print(BalancedBrackets("{123(456[.768])}*5)"))
print(BalancedBrackets("[{123(456[.768])}*5)"))