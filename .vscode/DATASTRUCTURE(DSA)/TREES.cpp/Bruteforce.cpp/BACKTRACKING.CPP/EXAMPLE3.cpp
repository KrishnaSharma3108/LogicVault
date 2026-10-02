#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permute(string &s, int index, vector<string> &ans)
{
    if (index == s.length())
    {
        ans.push_back(s);
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
        swap(s[index], s[i]);      
        permute(s, index + 1, ans); 
        swap(s[index], s[i]);      
    }
}
int main()
{
    string s;
    cout <<"enter string:";
    cin >> s;
    vector<string> ans;
    permute(s, 0, ans);
    sort(ans.begin(), ans.end()); 
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}