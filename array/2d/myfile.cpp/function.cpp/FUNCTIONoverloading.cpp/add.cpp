#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int main()
{
    cout<<"sum of integer:"<<add(5,45)<<endl;
    cout<<"sum of floats:"<<add(5.5f,23.33f)<<endl;
    return 0;
}