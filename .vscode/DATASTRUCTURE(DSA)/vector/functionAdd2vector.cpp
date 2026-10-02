#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int> arr,vector<int>brr)
{
    vector <int>s;
    for(int i=0;i<arr.size();i++)
    {
         s.push_back(arr[i] + brr[i]);
    }
    return s;
}
int main()
{
    vector<int> s;
    vector<int> arr={1,2,3,4};
    vector<int> brr={2,4,5,6};
    s=sum(arr,brr);
    for(auto a: s)
    {
        cout<<a<<"  ";
    }
    return 0;
}