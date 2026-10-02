#include<iostream>
#include<string.h>
using namespace std;
class Creature{
    public:
    virtual void eat()
    {
        cout<<"Basic - Eat\n";
    }
    virtual void swim(){
        cout<<"basic they can swim\n";
    }
    virtual void fly(){
        cout<<"basic they can fly\n";
    }

};
class Water:public Creature{
    public:
    /*void swim(){
        cout<<"they can swim";
    }*/
    void eat(){
        cout<<"water creature can eat\n";
    }
};
class Sky:public Creature{
    public:
    void fly(){
        cout<<"they can fly\n";
    }
    void eat(){
        cout<<"sky creature can also eat\n";
    }
};
int main()
{
    Creature *c;
    Water w;
    c=&w;
    c->eat();
    c->swim();
    Sky s;
    c=&s;
    c->eat();
    c->fly();
    return 0;
}