#include<iostream>
using namespace std;
int main(){
    int x,y,z,sum=0,sol=1;
    cout<<"enter the value of x , y , z "<<endl;
    cin>>x>>y>>z;
    sum=x+y;
    for(int i=1;i<=z;i++)
    {
        sol= sol*sum;    
    }
    cout<<"solution = "<<sol<<endl;
        return 0;
}