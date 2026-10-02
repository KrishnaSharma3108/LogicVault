#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int sol[20];     
    int top = -1;
    int sum = 0;
    int i = 0;
    while (true)
    {
        if (i < n && sum + arr[i] <= target)
        {
            top++;
            sol[top] = i;
            sum = sum + arr[i];
            if (sum == target)
            {
                cout << "answer : ";
                for (int j = 0; j <= top; j++)
                    cout << arr[sol[j]] << " ";
                cout << endl;
            }
            i++;
        }
        else
        {
            if (top == -1)
            {
                break;
            }
            i = sol[top];
            sum =sum - arr[i];
           top--;
           i++;
        }
    }
    return 0;
}