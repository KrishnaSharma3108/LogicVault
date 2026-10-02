#include<iostream>
using namespace std;
int main()
{
    int m=10,n,o;
    int* z=&m;
    cout<<"Pointer : show the declaration of pointer"<<endl;
    cout<<"here m=10,n and o are two integer variable and *z is the integer"<<endl;
    cout<<"z stroes the address of m="<<z<<endl;
    cout<<"&m is the address of m="<<&m<<endl;
    cout<<"&n strores the address of n="<<&n<<endl;
    cout<<"&o stroes the address of o"<<&o<<endl;
    cout<<"&z stroes the address of z="<<&z<<endl;
    return 0;
}
