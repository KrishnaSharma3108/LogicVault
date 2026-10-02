#include <iostream>
using namespace std;
// Function to find the two indices using brute force
void findTwoSum(int arr[], int size, int target) 
{
    // Outer loop picks the first element
    for (int i = 0; i < size; i++) 
    {
        // Inner loop checks all subsequent elements
        for (int j = i + 1; j < size; j++) 
        {
            // Check if the pair matches the target sum
            if (arr[i] + arr[j] == target) 
            {
                cout << "Target found! Indices: " << i << " and " << j << "\n";
                cout << "Values: " << arr[i] << " + " << arr[j] << " = " << target << "\n";
                return; // Stop searching once the first match is found
            }
        }
    }
    cout << "No pair matches the target sum.\n";
}
int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 26;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array: [2, 7, 11, 15] | Target Sum: " << target << "\n\n";
    findTwoSum(arr, size, target);
    return 0;
}