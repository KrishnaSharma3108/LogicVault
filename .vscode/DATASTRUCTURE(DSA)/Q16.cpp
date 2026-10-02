#include<iostream>
using namespace std;
int main()
{
   int a[9]={10,10,20,30,20,10,20,40,50},j=0,n[9],ns;
   cout<<"enter number to del";
   cin>>ns;

   for(int i=0;i<9;i++)
   {
    if(a[i]==ns)
    {
        continue;
    }
    else{ 
         n[j]=a[i];
         j++;
    } 
    }
    for(int i=0;i<j;i++)
    {
        cout<<n[i]<<" ";
    }
    return 0;
}    
