#include<iostream>
#include<string.h>
using namespace std;
class Parent {
    public:
    void info(){
        cout<<"parent class\n";
    }
    virtual void hello()
    {
        cout<<"hellllooooo fom parents\n";
    }
};
class Child :public Parent {
    public:
    void info(){
        cout<<"child class\n";
    }
    void hello(){
        cout<<"helllllllllloooooooo from child\n";
    }
};
int main(){
    Parent *p;
    Child C;
    p=&C;
    p->hello();
    //Child c1;;
    //c1.hello();
    return 0; 
}