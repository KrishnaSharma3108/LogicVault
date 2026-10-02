#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
float max(float a,float b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    cout<<"max of integer:"<<max(45,65)<<endl;
    cout<<"max of float:"<<max(2.3445f,2.344f)<<endl;
    return 0;
}