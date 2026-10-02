#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        cout<<"enter element = ";
        cin>>x;
        a.push_back(x);
    }
    for(int a:a)
    {
        cout<<a<<" ";
    }
    return 0;
}