/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "rivanshu";
    cout << "All possible 2-character pairs: "<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            cout << str[i] << str[j] << endl;
        }
    }
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    if (N <= 0 || N > str.length())
    {
        cout << "Invalid value of N";
        return 0;
    }
    cout << "Substrings of length " << N << " are: "<<endl;
    for (int i = 0; i <= str.length() - N; i++)
    {
        for (int j = i; j < i + N; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "rivanshu";
    cout << "All possible 2-character pairs:\n";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            cout << str[i] << str[j] << endl;
        }
    }
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Output:"<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j <= str.length() - (N - 1); j++)
        {
            cout << str[i];
            for (int k = j; k < j + N - 1; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
        break;
    }
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "rivanshu";
    int N;
    cout << "All possible 2-character pairs:\n";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            cout << str[i] << str[j] << endl;
        }
    }
    cout << "Enter N: ";
    cin >> N;
    cout << "Output:\n";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j <= str.length() - (N - 1); j++)
        {
            cout << str[i];
            for (int k = j; k < j + N - 1; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
    }
    return 0;
}