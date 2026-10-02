#include<iostream>
using namespace std;
void factorial(int n)
{
    int f,i;
    f=1;
    i=n;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    cout<<"factorial="<<f<<endl;
}
int main()
   {int n;
     cout<<"enter a no";
     cin>>n;
     factorial(n);
     return 0;
   }