#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string reverseBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += char((n % 2) + '0');
        n = n / 2;
    }
    return binary;
}
int binaryToDecimal(string binary)
{
    int decimal = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}
bool compareNumbers(int a, int b)
{
    string binaryA = reverseBinary(a);
    string binaryB = reverseBinary(b);
    int valueA = binaryToDecimal(binaryA);
    int valueB = binaryToDecimal(binaryB);
    if (valueA == valueB)
        return a < b;

    return valueA < valueB;
}
void sortNumbers(vector<int>& nums)
{
    sort(nums.begin(), nums.end(), compareNumbers);
}
void display(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    vector<int> nums = {10, 12, 7, 8};

    sortNumbers(nums);

    cout << "Sorted numbers: ";
    display(nums);

    return 0;
}