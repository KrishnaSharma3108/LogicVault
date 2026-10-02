#include<iostream>
using namespace std;
int main(){
    int temp,i,j,a=0,b=1,n;
    cout<<"enter number of rows = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<a<<" ";
            temp=a;
            a=b;
            b=temp;
        }
        cout<<endl;
        }
        return 0;
}