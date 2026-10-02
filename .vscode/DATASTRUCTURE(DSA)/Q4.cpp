#include<iostream>
using namespace std;
int main(){
    int x,y,sol=1,i;
    cout<<"enter the value of x and y "<<endl;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        sol*=x;
    }
    cout<<"solution = "<<sol<<endl;
    return 0;
}