#include<iostream>
using namespace std;
int main(){
    int i,j,a=0,n;
    cout<<"enter number of rows = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            if(a==0)
            {
                a=1;
            }
            else if(a==1)
            {
                a=0;
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}