#include<iostream>
#include<stack>
#include<string>
using namespace std;
string posttopre(string &r)
{
    stack<string> st;
    for(int i = 0; i < r.length(); i++)
    {
        char f = r[i];
        if((f >= 'a' && f <= 'z') || 
           (f >= 'A' && f <= 'Z') || 
           (f >= '0' && f <= '9'))
        {
            st.push(string(1, f));
        }
        else
        {
            string op1 = st.top(); 
            st.pop();
            string op2 = st.top();
             st.pop();
            string temp = string(1, f) + op2 + op1;
            st.push(temp);
        }
    }
    return st.top();
}
int main()
{
    string s;
    cout << "Enter the postfix expression: ";
    cin >> s;
    cout << "The prefix expression is: " << posttopre(s) << endl;
    return 0;
}