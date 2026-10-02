#include <iostream>
#include <vector>
#include<ctime>
using namespace std;
void generate(int n, int open, int close, string str, vector<string> &ans)
{
    if (str.length() == 2 * n)
    {
        ans.push_back(str);
        return;
    }
    if (open < n)
    {
        generate(n, open + 1, close, str + "(", ans);
    }
    if (close < open)
    {
        generate(n, open, close + 1, str + ")", ans);
    }
}
vector<string> generateParentheses(int n)
{
    vector<string> ans;
    generate(n, 0, 0, "", ans);
    return ans;
}
int main()
{
     clock_t start=clock();
    int n = 2;  
    vector<string> result = generateParentheses(n);
    cout << "Balanced Parentheses are:"<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    clock_t end=clock();
    double cpu_time=double (end-start)/CLOCKS_PER_SEC;
    cout<<"Cpu time"<<cpu_time<<"sec\n";
    return 0;
}