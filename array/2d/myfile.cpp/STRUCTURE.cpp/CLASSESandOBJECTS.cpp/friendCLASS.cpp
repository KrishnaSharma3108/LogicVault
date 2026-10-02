#include<iostream>
using namespace std;
class number
{
    private:
    int x,y,z;
    public:
    void getdata()
    {
        cout<<"enter x,y";
        cin>>x>>y;
    }
    friend class krishna;
};
class krishna
{
    public:
    number n;
    void show()
    {
        n.getdata();
        n.z=n.x+n.y;
        cout<<n.z;
    }
};
int main()
{
    krishna k;
    k.show();
    return 0;
}