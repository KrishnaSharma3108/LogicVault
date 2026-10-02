#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i];
    }
    cout << "Merged: ";
    for (i = low; i <= high; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        cout << "Left: ";
        for (int i = low; i <= mid; i++)
        {
            cout << a[i] << " ";
        }
        cout << "  Right: ";
        for (int i = mid + 1; i <= high; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int a[] = {6, 13, 7, 50, 5, 12, 10, 9, 1};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Original: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    mergeSort(a, 0, n - 1);
    cout <<endl<< "Sorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}