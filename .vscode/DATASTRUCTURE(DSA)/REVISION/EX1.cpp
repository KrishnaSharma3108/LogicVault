#include<iostream>
using namespace std;
void num(int n)
{
    if(n<11)
    {
        cout<<n<<" ";
         num(n+1);
    }
   // return -1;
}
int main()
{
    int n;
    num(1);
    return 0;
}