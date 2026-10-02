#include <iostream>
using namespace std;

int main()
{
    int a[9] = {10, 10, 20, 30, 20, 10, 20, 40, 50};
    int n = 9, ns;

    cout << "Enter number to delete: ";
    cin >> ns;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ns)
        {
            for (int k = i; k < n - 1; k++)
            {
                a[k] = a[k + 1];
            }
            n--;
            i--;   
        }
    }
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}