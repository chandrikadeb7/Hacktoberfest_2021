// In this program, the implementation of a queue is shown using a menu driven and interactive program.
// The maximum size of queue is defined as 10.
// The program clearly demonstrates that a queue works on fifo (first in first out) basis.

#include<iostream>
using namespace std;
#define Max 10
int push(int[],int);
int pop(int[],int);
void display(int[],int);
void peek(int[],int);
int main()
{
    int stack[Max],top=-1,ch;
    char op;
    do
    {
        cout<<"\nMenu \n 1 push\n 2 pop \n 3 Display\n 4 Peek";
        cout<<"\n Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            top=push(stack,top);
            break;
        case 2:
            top=pop(stack,top);
            break;
        case 3:
            display(stack,top);
            break;
        case 4:
            peek(stack,top);
            break;
        default:
            cout<<"INVALID OPTION\n";
        }
            cout<<"\nDO YOU WANT TO CONTINUE: PRESS Y or y FOR YES OTHERWISE N or n for NO\n";
            cin>>op;
    }while(op=='Y' || op=='y');
}
int push(int st[],int temp)
{
    if(temp==Max-1)
        cout<<"stack is full ,cannot push more elements\n";
    else
    {
        int n;
        cout<<"enter an element\n";
        cin>>n;
        st[++temp]=n;
        cout<<"element pushed successfully\n";
    }
    return temp;
}
int pop(int st[],int temp)
{
    if(temp==-1)
        cout<<"stack is empty ,cannot pop more elements\n";
    else
        cout<<"Popped element is: "<<st[temp--];
    return temp;
}
void display(int st[],int temp)
{
    if(temp==-1)
        cout<<"stack is empty\n";
    else
    {
        cout<<"Stack elements are:\n";
        while(temp!=-1)
        {
            cout<<st[temp]<<" ";
            temp--;
        }
    }
}
void peek(int st[],int temp)
{
    if(temp==-1)
        cout<<"stack is empty\n";
    else
        cout<<"topmost element is: "<<st[temp];
}
