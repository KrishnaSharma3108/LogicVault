#include<iostream>
using namespace std;
void array1(int arr[5])
{
    int sum=0,i;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum<<endl;
}
int main()
{
    int n,arr[5],i;
    cout<<"enter array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    array1(arr);
    

}