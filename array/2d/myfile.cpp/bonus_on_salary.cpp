#include<iostream>
using namespace std;
int main(){
int salary;
float bonus;
cout<<"enter salary";
cin>>salary;
if(salary<10000)
{
    bonus=0;
}    
if(salary>=10000&&salary<=25000)
{
    bonus=salary*2/100;
}
if(salary>=25001&&salary<=40000)
{
    bonus=salary*3/100;
}
if(salary>40000)
{
    bonus=salary*5/100;
}
cout<<"bonus="<<bonus;
    return 0;
}