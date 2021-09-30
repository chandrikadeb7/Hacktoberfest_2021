/*
Stack is compareable to the book stack, ie the last in is the first out (LIFO) , is liye sab apni copy
upar rakhte the taki jaldi check ho jai aur good mile😂, the only operations possible in stack are finding it's size,
push back and pop back and nothing else. 
⚠️The questions specifically meant for stack are:-
🔹Next Greater Element
🔸Bracket Pair Matching

Queues are dismissal wali line, first in first out (FIFO), line me pehle lag jao jaldi chutti mil jaigi, the operations in
queues are size check , push back and pop front , ⚠️Queues are mainly used in Graphs.
*/

/*Declaring and working with stack in STL
stack<int> s;
for (int i = 0; i < 10; i++)
{
    s.push(i);
}
for (int j = 0; j < 10; j++)
{
    cout<<s.top()<<" ";
    s.pop();
}

Declaring and working with queue
queue<string> q;
q.push("U");
q.push("L");
q.push("D");
while(!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}
*/

/*
🔥Balancing Bracket Problem:-
You're given a string like (({([])}))[()]{}), You need to print if the brackets are Balanced Or Not
*/
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