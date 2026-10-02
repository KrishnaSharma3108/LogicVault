#include<iostream>
using namespace std;
int function;
void palindrome(){
int n;
int rem=0,rev=0,temp;
cout<<"enter a no:";
cin>>n;
temp=n;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}    
if(temp==rev)
{
    cout<<"no is palindrome";
}
else{
    cout<<"no is not palindrome";
}
    return;
}
int main()
{
    palindrome();
    return 0;
}