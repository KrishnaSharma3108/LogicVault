#include<iostream>
#include<vector>
using namespace std;
void summ(vector<int>num,int i,int s)
{
    if(i<num.size())
    {
        s=s+num.at(i);
        summ(num,i+1,s);
    }
    else
    {
        cout<<"sum of vector = "<<s;
    }
}
int main()
{
    vector<int>num={1,2,3,4,5,6,7,8,9,10};
    summ(num,0,0);
   // cout<<"vector sum = "<<summ;
    return 0;
}