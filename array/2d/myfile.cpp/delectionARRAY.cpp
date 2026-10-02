#include<iostream>
using namespace std;
int main()
{
int a[5]={10,20,30,50,60},de,i,loc;
cout<<"enter no. to delete";
cin>>de;
cout<<"enter loc";    
cin>>loc;
for(i=loc;i<=4;i++)
{
    a[i]=a[i+1];
}   
a[loc]=de;
#include<iostream>
using namespace std;
int main()
{
int a[5]={10,20,30,50,60},ne,i,loc;
cout<<"enter no. to insert";
cin>>ne;
cout<<"enter loc";    
cin>>loc;
for(i=5;i>loc;i--)
{
    a[i]=a[i-1];
}   
a[loc]=ne;
for(i=0;i<=5;i++)
{
    cout<<a[i]<<endl;
}
return 0;
}

{
    cout<<a[i]<<endl;
}
return 0;
}
