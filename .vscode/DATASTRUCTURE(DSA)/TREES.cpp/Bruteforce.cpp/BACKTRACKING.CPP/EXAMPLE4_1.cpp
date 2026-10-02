#include <iostream>
#include<ctime>
using namespace std;
void printParenthesis(int open, int close, string s)
{
    if (open == 0 && close == 0)
    {
        cout << s << endl;
        return;
    }
    if (open > 0)
    {
        printParenthesis(open - 1, close, s + "(");
    }
    if (close > open)
    {
        printParenthesis(open, close - 1, s + ")");
    }
}
int main()
{
    clock_t start=clock();
    int n = 2;   
    printParenthesis(n, n, "");
    clock_t end=clock();
    double cpu_time=double (end-start)/CLOCKS_PER_SEC;
    cout<<"Cpu time"<<cpu_time<<"sec\n";
    return 0;
}