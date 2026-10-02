#include<iostream>
using namespace std;
int main()
{
  int ar[3][3]={{1,5,15},{10,8,56},{80,7,6}};
  int max=0;
  int row=0;
  for(int i=0;i<3;i++)
  {
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum=sum+ar[i][j];
    }
    if(sum>max)
    {
        max=sum;
        row=i;
    }
  }  
  cout<<"the row no.with max sum"<<row+1;
  cout<<endl;
    return 0;
}