#include <iostream> 
#include <stack> 
using namespace std; 

bool redundant_braces(string& str) 
{ 
 stack<char> st; 
 for (auto& ch : str) {  
 if (ch == ')') { 
 char top = st.top(); 
 st.pop();  
 bool flag = true;
 while (top != '(') { 
 if (top == '+' || top == '-' ||  top == '*' || top == '/') 
 flag = false; 
 top = st.top(); 
 st.pop(); 
 } 
 if (flag == true) 
 return true; 
 } 
 else
 st.push(ch); 
 } 
 return false; 
} 
 
void redundancy_check(string& str) 
{ 
 bool ans = redundant_braces(str); 
 if (ans == true) 
 cout << "Yes\n"; 
 else
 cout << "No\n"; 
} 
 
int main() 
{ 
 string str = "(a*b-(c+d))"; 
 redundancy_check(str); 
 str = "((a+b))"; 
 redundancy_check(str); 
 str = "(a/b*((c-d)))"; 
 redundancy_check(str); 
 return 0; 
} 
