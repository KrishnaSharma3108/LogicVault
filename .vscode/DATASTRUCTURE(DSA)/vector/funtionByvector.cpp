#include<iostream>
#include<vector>
using namespace std;
vector<int> square(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        arr.at(i)=arr.at(i)*arr.at(i);
    }
    return arr;
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    arr=square(arr);
    for(auto a: arr)
    {
        cout<<a<<"  ";
    }
    return 0;
}