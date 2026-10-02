#include<iostream>
#include<string.h>
using namespace std;
struct Person{
    string Name;
    int Age;
    float Salary;
    float BRIBE;
};
int main()
{
    Person person1={"Bhagwant Singh Mann",52,5.0100000000000000000000000000000000000000};
    cout<<"Name:"<<person1.Name<<endl;
    cout<<"Age:"<<person1.Age<<endl;
    cout<<"salary:"<<person1.Salary<<endl;
    
    return 0;
}