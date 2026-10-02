#include<iostream>
#include<vector>
using namespace std;
int summ(vector<int>num,int i,int s)
{
    if(i<num.size())
    {
        s=num.at(i)+summ(num,i+1,s);
        return s;
    }
    return 0;
}
int main()
{
    vector<int>num={1,2,3,4,5,6,7,8,9,10};
    cout<<summ(num,0,0);
   // cout<<"vector sum = "<<summ;
    return 0;
}