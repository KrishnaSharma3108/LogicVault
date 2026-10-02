#include <iostream>
#include <vector>
using namespace std;
void shellSort(vector<int>& a)
{
    int n = a.size();
    for (int gap = n / 2; gap > 0; gap = gap / 2)
    {
        for (int i = gap; i < n; i++)
        {
            
            int x = a[i];
            int j = i;
            for(;j >= gap && a[j - gap] > x;)
            {
                a[j] = a[j - gap];
                j = j - gap;
            }
            a[j] = x;
        }
    }
}
int main()
{
    vector<int> a = {12, 34, 54, 2,22, 34, 25, 26, 64, 11, 90, 88, 43};
    cout << "Before Sorting: ";
    for (int x : a)
    {
        cout << x << " ";
    }   
    shellSort(a);
    cout << "\nAfter Shell Sort: ";
    for (int x : a)
    {
        cout << x << " ";
    }    
    return 0;
}