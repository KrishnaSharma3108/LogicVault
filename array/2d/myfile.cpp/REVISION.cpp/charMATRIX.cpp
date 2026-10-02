#include<iostream>
using namespace std;
int main()
{
    char arr[3][3];
    int i,j;
    cout<<"enter 9 chr to insert";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                cout<<arr[i][j];
            }
            //cout<<endl;
        }
    }
    return 0;
}

