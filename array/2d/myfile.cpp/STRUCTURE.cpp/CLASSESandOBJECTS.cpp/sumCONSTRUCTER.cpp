#include<iostream>
using namespace std;
class sum
{
    private:
    int x,y,z;
    public:
    sum()
    {
        cout<<"enter x,y ";
        cin>>x>>y;
        
    }
    void show()
    {
        z=x+y;
        cout<<z;
    }
};
int main()
{
    sum s;
    s.show();
    return 0;
}