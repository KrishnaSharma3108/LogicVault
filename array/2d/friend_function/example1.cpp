#include<iostream>
using namespace std;
class LIC;
class bank;
class bank{
    private:
    int totaldeposit,totalloan;
    public:
    bank(){
        totaldeposit=3000000;
        totalloan=1000089;
    }
    friend void agent(bank &b,LIC &l);

};
class LIC{
    private:
    int policyholder;
    int houseloan;
    public:
    LIC(){
        policyholder=12390;
        houseloan=235;
    }
    friend void agent(bank &b,LIC &l);

};
void agent(bank &b,LIC &l)
{
cout<<"total deposit= "<<b.totaldeposit<<endl;
cout<<"total loan= "<<b.totalloan<<endl;
cout<<"total policy holder= "<<l.policyholder<<endl;
cout<<"toal house loan= "<<l.houseloan<<endl;

}
int main(){
    bank b;
    LIC l;
    agent(b,l);
    return 0;
}