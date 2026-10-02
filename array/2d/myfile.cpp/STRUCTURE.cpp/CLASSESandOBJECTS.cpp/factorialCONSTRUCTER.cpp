#include<iostream>
using namespace std;
class factorial
{
    private:
    int n,f,i;
    public:
    factorial()
    {
        f=1;
        cout<<"enter a no.";
        cin>>n;
    }
    void show()
    {
        i=n;
        while(i>=1)
        {
            f=f*i;
            i--;
        }
        cout<<"factorial= "<<f<<endl;
    }
};
int main()
{
    factorial F;
    F.show();
    return 0;
}