#include<iostream>
using namespace std;
class maxx{
    private:
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"enter value of a,b,c";
        cin>>a>>b>>c;
    }
    void showdata()
    {
        if(a>b&&a>c)
        {
            cout<<"a is max";
        }
        else if(b>a&&b>c)
        {
            cout<<"b is max";
        }
        else
        {
            cout<<"c is max";
        }
    }
};
int main()
{
    maxx m;
    m.getdata();
    m.showdata();
    return 0;
}