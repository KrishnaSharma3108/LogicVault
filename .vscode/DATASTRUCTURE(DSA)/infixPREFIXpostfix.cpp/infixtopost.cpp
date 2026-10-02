#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int check(char op)
{
    if(op=='+'||op=='-')
    {
        return 1;
    }
    else if(op=='*'||op=='/')
    {
        return 2;
    }
    else if(op=='^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}
int check_1(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
    {
        return 1;
    }
        return -2;
    
}
string infixtopostfix(string &s)
{
    stack<char>st;
    string res="";
    for(int i=0;i<s.length();i++)
    {
        char f =s[i];
        if(f>='a' && f<='z'||f>='A'&&f<='Z'||f>='0'&&f<='9')
        {
            res+=f;
        }
        else if(f=='(')
        {
            st.push(f);
        }
        else if(f==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
           st.pop();
        }
        else
        {
            while(!st.empty() && check_1(st.top())>=check(f))
            {
                res+=st.top();
                st.pop();
            }
            st.push(f);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s;
    cout<<"enter the infix expression";
    cin>>s;
    cout<<"the postfix expression is "<<infixtopostfix(s);
    return 0;
}