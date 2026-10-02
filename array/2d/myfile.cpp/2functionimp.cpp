#include<iostream>
using namespace std;
int factorial(int n)
{
    int f,i=n;
    f=1;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    return f;
}
int palindrome(int n)
{
    int rem=0,rev=0,i;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int ch,n,f,p;
    cout<<"1. factorial\n";
    cout<<"2. palindrome\n";
    cout<<"enter choice";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"enter a no:";
        cin>>n;
        f=factorial(n);
        cout<<f;
        break;
        case 2:
        cout<<"enter a no:";
        cin>>n;
        p=palindrome(n);
        if(n==p)
        {
            cout<<"no. is aplindrome";
        }
        else
        {
            cout<<"no. is not palindrome";
        }
        break;
        default:
        cout<<"invalid";
    }
    return 0;
}