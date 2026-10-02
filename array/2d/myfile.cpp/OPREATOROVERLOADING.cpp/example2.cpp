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
    int operator++()
    {
        x++;
        return x;
    }
};
    int main()
    {
        number n(10);
        int r=++n;
        cout<<r;
        return 0;   
    }


