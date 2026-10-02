#include<iostream>
using namespace std;
class number
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"enter a no";
        cin>>x;
    }
    friend void square(number obj);
};
void square(number obj)
{
    int sqr=obj.x*obj.x;
    cout<<sqr;
}
int main()
{
    number obj;
    obj.getdata();
    square(obj);
    return 0;
}
