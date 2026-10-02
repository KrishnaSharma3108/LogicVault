#include<iostream>
#include<vector>
using namespace std;
void maxx(vector<int>m,int i,int x)
{
    if(i<m.size())
{
    if(m.at(i)>x)
    {
        x=m.at(i);
    }
    maxx(m,i+1,x);
}
else
{
    cout<<x;
}
}
int main()
{
    vector<int>m={5,7,10,25,4};
    maxx(m,0,0);
    return 0;
}
