#include<iostream>
using namespace std;
int main()
{
int arr[5],i,ns,loc=-1;
cout<<"enter elements";
for(i=0;i<5;i++)
{
    cin>>arr[i];
}    
cout<<"enter element to search";
cin>>ns;
for(i=0;i<5;i++)
{
    if(ns==arr[i])
    {
        loc=i;
        break;
    }
}
if(loc==-1)
{
    cout<<"not found";

}
else{
    cout<<"loc="<<loc<<endl;
}
    return 0;
}