#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int prefrence(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string pretopost(string &s)
{
    stack<char> st;
    string res;
    for(int i = 0; i < s.length(); i++)
    {
        char f = s[i];
        if((f >= 'a' && f <= 'z') || 
           (f >= 'A' && f <= 'Z') || 
           (f >= '0' && f <= '9'))
        {
            res += f;
        }
        else if(f == '(')
        {
            st.push(f);
        }
        else if(f == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else
        {
            while(!st.empty() && prefrence(st.top()) >= prefrence(f))
            {
                res += st.top();
                st.pop();
            }
            st.push(f);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s;
    cout << "Enter the prefix expression: ";
    cin >> s;
    cout << "The postfix expression is: " << pretopost(s) << endl;
    return 0;
}