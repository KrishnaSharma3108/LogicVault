#include<iostream>
using namespace std;
int main()
{
    char nm[20];
    cout<<"enter name";
    cin.getline(nm,20);
    for(int i=0;i<5;i++)
    {
        cout<<"welcome= "<<nm<<endl;
    }
    
    return 0;
}