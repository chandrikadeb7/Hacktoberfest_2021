# Bracket Pair Matching With C++

Stack is compareable to the book stack, ie the last in is the first out (LIFO) , is liye sab apni copy
upar rakhte the taki jaldi check ho jai aur good mile😂, the only operations possible in stack are finding it's size,
push back and pop back and nothing else.
⚠️The questions specifically meant for stack are:-
🔹Next Greater Element
🔸Bracket Pair Matching

##### Code In Detail
#include<bits/stdc++.h>
using namespace std; 

unordered_map<char,int> symbols = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s) {
stack<char> st;
for(char brackets : s)
{
    if(symbols[brackets]<0) // If It's Opening Bracket
        st.push(brackets); //Push it in stack
    else{
        if(st.empty()) //If stack is empty ie no closing bracket for it
        return "NO";        
        char top = st.top(); //Picking the top bracket
        st.pop();
        if(symbols[brackets]+symbols[top]!=0)
        return "NO";
    }
}
if(st.empty())
    return "YES";
    return "NO";

}

int main()
{
int t;
cin>>t;
while (t--)
{
    string bracks;
    cin>>bracks;
    cout<<isBalanced(bracks)<<endl;
}
}