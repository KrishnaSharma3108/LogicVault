#include<iostream>
using namespace std;
class box
{
    public:
    int wt;
    void getdata()
    {
        cout<<"enter wt";
        cin>>wt;
    }
    void maxx(box b1,box b2)
    {
        if(b1.wt>b2.wt)
        {
            cout<<"b1 is maxxxx";
        }
        else
        {
            cout<<"b2 is mxxxxxxx";
        }
    }

};
int main()
{
    box b1,b2;
    b1.getdata();
    b2.getdata();
    b1.maxx(b1,b2);
    return 0;
}