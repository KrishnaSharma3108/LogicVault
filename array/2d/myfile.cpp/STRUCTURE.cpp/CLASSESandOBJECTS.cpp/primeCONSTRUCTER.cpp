#include<iostream>
using namespace std;
class prime
{
    private:
    int n,f,i;
    public:
    prime(int n)
    {
        this->n=n;
        f=0;
        
    }
    void show()
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            cout<<"prime";
        }
        else
        {
            cout<<"not prime";
        }
    }
};
int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    prime p(n);
    p.show();
    return 0;
}