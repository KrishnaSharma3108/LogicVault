#include<iostream>
using namespace std;
int main(){
    int n,f=0,rem=0;
    cout<<"enter a number "<<endl;
    cin>>n;
    f=n%10;
    do{
        rem=n%10;
        n=n/10;
    }while(n>0);
    if(f>rem)
    {
        cout<<"bad";
    }
    else if(f<=rem)
    {
        cout<<"good";
    }
    return 0;
}