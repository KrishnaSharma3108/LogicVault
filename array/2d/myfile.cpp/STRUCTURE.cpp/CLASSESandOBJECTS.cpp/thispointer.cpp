#include<iostream>
using namespace std;
class sum1{
    private:
    int x,y,z;
    public:
    void getdata(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void showdata()
    {
        z=x+y;
        cout<<"z= "<<z;
    }
};
int main(){
    sum1 s;
    s.getdata(20,30);
    s.showdata();
    return 0;
}