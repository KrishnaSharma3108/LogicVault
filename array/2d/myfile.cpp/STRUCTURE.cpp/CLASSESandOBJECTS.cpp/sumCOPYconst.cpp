#include<iostream>
using namespace std;
class sum1
{
    private:
    int x,y,z;
    public:
    sum1()
    {
        int x,y;
    }
    sum1(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    sum1(sum1&obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void show()
    {
        z=x+y;
        cout<<z;
    }
};
int main()
{
    int x,y;
    cout<<"enter x,y ";
    cin>>x>>y;
    sum1 s;
    sum1 s1(x,y);
    sum1 s2(s1);
    s2.show();
    return 0;
}
    