#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y,z,d=0,sol=0;
    cout<<"enter the value of x , y , z  "<<endl;
    cin>>x>>y>>z;
    if(x<=9){
        d=1;
    }
    else if(x<=99){
        d=2;
    } 
    else if(x<=999){
        d=3;
    }
    else{
        d=0;
    }
    sol=pow(10,d)*y + x;
    cout<<"solution = "<<sol<<endl;
    return 0;
    
}