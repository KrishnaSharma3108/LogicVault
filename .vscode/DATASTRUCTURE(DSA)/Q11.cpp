#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no elements you want to enter in array = ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements in array = ";
        cin>>a[i];
    }
    int m=a[0] ;//INT32_MIN
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        if(a[i]>m)
            {   if(a[i]%2==0)        
                {
                m=a[i];
                }
            }
        }
         cout<<"max of even number is = "<<m<<endl;
return 0;
}