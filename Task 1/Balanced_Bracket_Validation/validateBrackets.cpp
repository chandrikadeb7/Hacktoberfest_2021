
#include <iostream>
using namespace std;

//create class
class stack_paranthesis{
    char arr[20];	/*declare character array(used as stack here)*/
    string s;			/*string s will be taken from user*/
int top,l;
/*op is from handling peek position and l is as flag for well performed paranthesis*/
public:
stack_paranthesis(string str)/*parameterised constructor for input string*/
{
        top=-1;
        s=str;
        l=0;
    }
void push()						/*push function*/
{
        top+=1;
        arr[top]=s[top];
    }
    void logic(){/*logic for well formed parathesis*/
        string str1="()";
        for(int i=0;i<s.length();i++){
            if(s[i]==str1[0]){
                l+=1;
                push();
            }
            else if(s[i]==str1[1] && l>0){
                l-=1;
                push();
            }

        }
        if(l>=0){
        for(int i=0;i<l;i++){
            top+=1;
            arr[top]=str1[1];

        }
        }

    }
    void display(){//to display stack
        for(int i=0;i<=top;i++){
            cout<<arr[i];
        }
    }
};
int main(){
   cout<<"Enter 1::ENTER A STRING \nEnter 2::EXIT\n";
   int n;
   cin>>n;
   while(n!=2){
     cout<<"***********\n";
     cout<<"INPUT IS : ";
     string str;
     cin>>str;
     stack_paranthesis s1(str);
     s1.logic();
     cout<<"\n"<<"OUTPUT IS : ";
     s1.display();
     cout<<"\n************\n";
     cout<<"Enter 1::ENTER A STRING \nEnter 2::EXIT\n";
     cin>>n;
   }
   cout<<"\n End of the Program";

}
