#include<iostream>
using namespace std;
class max1
{
    private:
    int x,y;
    public:
    max1()
    {
        cout<<"enter x,y";
        cin>>x>>y;
    }
    void show()
    {
        if(x>y)
        {
            cout<<"x is max";
        }
        else
        {
            cout<<"y is max";
        }
    }
};
int main()
{
    max1 M;
    M.show();
    return 0;
}