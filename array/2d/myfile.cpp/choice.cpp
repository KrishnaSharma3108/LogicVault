#include<iostream>
using namespace std;
int main(){
int x,y,choice,result;
cout<<"enter x,y";
cin>>x>>y;    
cout<<"1.sum"<<endl;
cout<<"2.sub"<<endl;
cout<<"3.mul"<<endl;
cout<<"4.div"<<endl;
cout<<"enter choice";
cin>>choice;
switch (choice)
{
    
    case 1:
    result=x+y;
    break;
    case 2:
    result=x-y;
    break;
    case 3:
    result=x*y;
    break;
    case 4:
    result=x/y;
    break; 
default:
result=0;
}
{
    cout<<"result="<<result<<endl;
}

    return 0;
}