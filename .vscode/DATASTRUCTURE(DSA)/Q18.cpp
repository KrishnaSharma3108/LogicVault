#include<iostream>
using namespace std;
int search(int a[],int i,int ns,)
{
    if(a[i]==ns||i>6) 
    {
        
        return i;
        cout<<"X";
        //search(a,i+1,ns);
    }
    else 
    {
       
        return search(a,i+1,ns);
         cout<<"y";
    }
}
int main()
{
    int a[6]={10,20,30,40,50,60},ns,i=0;
    cout<<"enter number to search = ";
    cin>>ns;
    int loc=search(a,i,ns);
    if (loc<=6)
    cout<<"search element is = "<<loc<<endl;
    else
    cout<<"nf";
    return 0;
}