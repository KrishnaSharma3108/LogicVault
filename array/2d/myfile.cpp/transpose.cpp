#include<iostream>
using namespace std;
int main()
{
   int r;
   cout<<"enter no. of rows";
   cin>>r;
   int c;
   cout<<"enter no.of columns";
   cin>>c;
   int ar[r][c];
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        cin>>ar[i][j];
    }
   } 
   cout<<endl;
   for(int i=0;i<c;i++)
   {
    for(int j=0;j<r;j++)
    {
        cout<<ar[j][i];
    }
    cout<<endl;
   }
    return 0;
}