#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int decimal;
    int binary[32], i = 0;
    cout << "Enter decimal number: ";
    cin >> decimal;
    int n = decimal;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    cout << endl;
    int result = 0;
    for (int j = 0; j < i; j++)
    {
        result = result * 2 + binary[j];
        cout << result << " ";
    }
    cout << "Reversed Binary: ";
    for (int j = 0; j < i; j++)
    {
        cout << binary[j];
    }
        cout << endl;
    cout << "Decimal value of reversed binary: " << result;
    return 0;
}