#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans=0;
    vector<int>num={1,2,3,4,3,4,1};
    for(int val:num)
    {
        ans ^= val;
    }
    cout<<ans<<endl;
    return 0;
}
