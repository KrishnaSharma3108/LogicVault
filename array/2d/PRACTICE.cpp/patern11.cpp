#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<=8;i=i+2)
    {
        for(int j=i;j<=i+8;j=j+2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}