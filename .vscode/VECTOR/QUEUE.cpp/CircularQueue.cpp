#include<iostream>
using namespace std;
class myqueue
{
    private:
    int *arr,front,size,capacity;
    public:
    myqueue(int cap)
    {
       capacity=cap;
        arr=new int[capacity];
        front=0;
        size=0;
    }
    void enqueue(int x)
    {
        if(size==capacity)
        {
            cout<<"QUEUE IS FULL !!!! "<<endl;
            return ;
        }
        int rear=(front+size)%capacity;
        arr[rear]=x;
        size++;
    }
    int dequeue()
    {
        if(size==0)
        {
            cout<<"QUEUE IS EMPTY!@!@!@!"<<endl;
            return -1;
        }
        int res=arr[front];
        front =(front+1)%capacity;
        size--;
        return res;
    }
    int getfront()
    {
        if(size==0)
        {
            return -1;
        }
        return arr[front];
    }
    int getrare()
    {
        if(size==0)
        {
            return -1;
        }
        int rear=(front +size-1)%capacity;
        return arr[rear];
    }
};
int main()
{
    myqueue q(2);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.getfront() << " " << q.getrare() << endl;
    q.dequeue();
    cout << q.getfront() << " " << q.getrare() << endl;
    q.enqueue(40);
    cout << q.getfront() << " " << q.getrare() << endl;
    return 0;
}