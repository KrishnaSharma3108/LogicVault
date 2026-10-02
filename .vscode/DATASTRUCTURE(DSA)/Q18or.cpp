#include<iostream>
using namespace std;
void search (int a[],int i,int ns,int &loc)
{
    if(i<6) 
    {
        if(a[i]==ns)
           loc=i;
           search(a,i+1,ns ,loc);
    }
    
}
int main()
{
    int a[6]={10,20,30,40,50,60},ns,i=0,loc=-1;
    cout<<"enter number to search = ";
    cin>>ns;
    search(a,i,ns,loc);
    //if (loc<=6)
    //cout<<"search element is = "<<loc<<endl;
    //else
    cout<<loc;
    return 0;
}