#include<iostream>
using namespace std;
void array1(int arr[5])
{
    int max=0,i;
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"max="<<max<<endl;
}
int main()
{
    int arr[5],i;
    cout<<"enter array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    array1(arr);
    return 0;
}