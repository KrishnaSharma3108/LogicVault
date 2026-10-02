#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[500];
    int i,l;
    cout<<"enter a line ";
    cin.getline(arr,500);
    l=strlen(arr);
    for(i=0;i<l;i++)
    {
        if(arr[i]==' ')
        cout<<endl;
        else
        {
             cout<<arr[i];   
        }
    }
    
return 0;
}
