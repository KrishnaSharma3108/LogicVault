#include<iostream>
using namespace std;
class number 
{
    private:
    int x;
    public:
    number(int p)
    {
        x=p;
    }
    void operator++(int n)
    {
        x++;
    }
    void show()
    {
        cout<<x;
    }
};
int main()
{
    number a(20);
    a++;
    a.show();
    return 0;
}