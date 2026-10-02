#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 3 rows, 4 columns, all elements initialized to 0
    vector<vector<int>> vec(3, vector<int>(4));
    cout<<"enter element in vector = ";
    for(int i=0;i<vec.size();i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
        cin>>vec[i][j];
        }
    }    
    // Modifying elements
    //vec[0][0] = 5;
    //vec[2][3] = 10;

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<i<<" ->";
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}