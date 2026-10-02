#include<iostream>
using namespace std;
int main()
{
   int arr[] = {13, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int target = 10;
    for (int i = 0; i < n - 2; i++)
    {
        if(arr[i]>target)
        {
            continue;
        }
        for (int j = i + 1; j < n - 1; j++)
        {
            if(arr[i]+arr[j]>target)
            {
                continue;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}
