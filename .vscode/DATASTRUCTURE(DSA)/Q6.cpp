#include<iostream>
using namespace std;
int main(){
    int n,sol=0,rem=0;
    cout<<"enter a number = ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        if(rem==2||rem==3||rem==5||rem==7)
        {
            sol=rem;
            cout<<sol;
        }
        
    }
}