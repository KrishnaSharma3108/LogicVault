#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 2};
    int found = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            cout << "Comparing arr[" << i << "] = " << arr[i]<< " with arr[" << j << "] = " << arr[j] << endl;
            if(arr[i] == arr[j])
            {
                cout << "Yes" << endl;
                cout << "Duplicate element: " << arr[i] << endl;
                cout << "Positions: " << i << " and " << j << endl;
                found = 1;
             //   break;
            }
           // else
            //{
              //  cout << "No Match" << endl;
            //}
            //cout << endl;
        }
    }
    if(found == 0)
    {
        cout << "No duplicate element found." << endl;
    }
    return 0;
}