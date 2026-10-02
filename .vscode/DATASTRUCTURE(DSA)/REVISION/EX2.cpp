#include<iostream>
using namespace std;
void table(int i,int n)
{
    if(i<=10)
    {
        //i*n;
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
        table(i+1,n);
    }
}
int main()
{
    int n,i;
    cout<<"enter table number ";
    cin>>n;
    table(1,n);
    return 0;
}