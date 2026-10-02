#include<iostream>
using namespace std;
int function;
void traingle()
{
    int row;
    cout<<"enter the no. of rows:";
    cin>>row;
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        int val=1;
        cout<<(row-i)<<endl;
        //spacing
        for(int j=1;j<(row-i);j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<" "<<val;
            val=val*(i-k)/(k+1);
        }
        cout<<endl<<endl;
    }
    cout<<endl;
    return ;
}
int main(){
    traingle();
    cout<<traingle;
    return 0;
}