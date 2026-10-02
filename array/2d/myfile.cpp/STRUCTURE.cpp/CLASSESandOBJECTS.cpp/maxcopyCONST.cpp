#include<iostream>
using namespace std;
class maxx
{
    private:
    int a,b,c;
    public:
    maxx()
    {
        int a,b,c;
    }
    maxx(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    maxx(maxx&obj)
    {
        a=obj.a;
        b=obj.b;
        c=obj.c;
    }
    void show()
    {
        if(a>b&&a>c)
        {
            cout<<"a is max";
        }
        else if(b>a&&b>c)
        {
            cout<<"b is max";
        }
        else if(c>a && a>b)
        {
            cout<<"c is max";
        }
    }
};
int main()
{
    int a,b,c;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    maxx m1(a,b,c);
    maxx m2(m1);
    m2.show();
    return 0;
}