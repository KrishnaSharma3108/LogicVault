#include<iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    int i;
    for(int i=0;i<=120;i++)
    {
       cout<<"Krishna Sharma"<<endl;
       std::this_thread::sleep_for(std::chrono::seconds(2));
    }
return 0;
}