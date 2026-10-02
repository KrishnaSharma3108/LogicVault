#include<iostream>
#include<vector>
using namespace std;
vector<int> add(vector<int>v1,vector<int>v2,vector<int>&v3,int i)
{
    if(v1.size()==v2.size()&&i<v1.size())
{
    v3.push_back(v1.at(i)+v2.at(i));
     return add(v1,v2,v3,i+1);
    //return v3;
}
 return v3;
}
int main()
{
    vector<int>v1={10,20,30,40,50,60,70,80,90,100};
    vector<int>v2={1,2,3,4,5,6,7,8,9,10};
    vector<int>v3;
    add(v1,v2,v3,0);
    for( int v : v3)
    {
        cout<<" "<<v;
    }
return 0;
}
