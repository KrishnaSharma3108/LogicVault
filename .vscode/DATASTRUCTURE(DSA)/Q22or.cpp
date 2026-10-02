#include<iostream>
#include<vector>
using namespace std;
int maxx(vector<int>m,int i,int x)
{
    if(i<m.size())
{
    if(m.at(i)>x)
    {
        x=m.at(i);
    }
    return maxx(m,i+1,x);
}
//else
//{
   // cout<<x;
//}
return x;

}
int main()
{
    vector<int>m={5,7,10,25,4};
    maxx(m,0,0);
    cout<< " max = "<<maxx(m,0,0)<<endl;
    return 0;
}
