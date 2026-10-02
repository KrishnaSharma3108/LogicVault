#include<iostream>
#include<stack>
#include<string>
using namespace std;
/*+ab  a+b
+-abc
*/
int check(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
    {
        return 1;
    }
    return 0;
}
string pretoinfix(string &s)
{
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        char f = s[i];
        if((f >= 'a' && f <= 'z') || 
           (f >= 'A' && f <= 'Z') || 
           (f >= '0' && f <= '9'))
        {
            st.push(string(1, f));
        }
        else if(check(f))
        {
            string op1 = st.top();
             st.pop();
            string op2 = st.top(); 
            st.pop();
            string temp = op1 + f + op2 ;
            st.push(temp);
        }
    }
    return st.top();
}
int main()
{
    string s;
    cout << "Enter the prefix expression: ";
    cin >> s;
    cout << "The infix expression is: " << pretoinfix(s) << endl;
    return 0;
}