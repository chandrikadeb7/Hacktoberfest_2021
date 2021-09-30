#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
struct Node
{
    char data;
    Node *next;
};
Node *top = NULL;
bool checkBalancedParantheses(char exp[], int len)
{
    stack<char> S;
    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            S.push(exp[i]);
            continue;
        }
        if (S.empty())
            return false;
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            char x;
            char expr = exp[i];
            switch (expr)
            {
            case ')':
            {
                x = S.top();
                if (&expr == "}" || &expr == "]")
                    break;
                S.pop();
                continue;
            }
            case '}':
            {
                x = S.top();
                if (&expr == ")" || &expr == "]")
                    break;
                S.pop();
                continue;
            }
            case ']':
            {
                x = S.top();
                if (&expr == ")" || &expr == "}")
                    break;
                S.pop();
                continue;
            }
            }
        }
    }

    if (S.empty())
        return true;
    else
        return false;
}
int main()
{
    char c[50];
    gets(c);
    if (checkBalancedParantheses(c, strlen(c)))
        cout << "Parantheses are balanced";
    else
        cout << "Not balanced";
    return 0;
}