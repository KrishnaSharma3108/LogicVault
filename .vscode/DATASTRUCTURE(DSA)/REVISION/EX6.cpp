#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    cout<<"fact of number is= "<<fact(n)<<endl;
    return 0;
}