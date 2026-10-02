#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j,s1=0,s2=0,r1,r2;
    cout<<"enter elements";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the no.of row";
    cin>>r1;
    cout<<"enter the no. of 2nd row";
    cin>>r2;

    for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
        if(i==r1-1)
        {
            s1=sum;
        }
        if(i==r2-1)
        {
            s2=sum;
        }
    }
    int difference=s1-s2;
      cout<<"difference of 2 rows="<<s1-s2<<endl;
    return 0;
}    