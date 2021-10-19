Balanced Brackets

In an expression, brackets are said to be balanced when every opening bracket has a corresponding closing bracket.
This problem will be implemented in C++ language.

Algorithm For this problem, we will use a stack. We will push each opening bracket in the stack and pop the last inserted opening bracket whenever a closing bracket is encountered. If the closing bracket does not correspond to the opening bracket, then we stop and say that the brackets are not balanced.

Also it is to be noted that we must always check that the stack is empty at the end because if it is not, the brackets aren’t balanced.

And this Alogorithm will return a balanced brackets string. 
