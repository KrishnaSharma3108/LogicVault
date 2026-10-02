#include<iostream>
using namespace std;
class myQueue 
{
    int *arr;
    int capacity;
    int size;
    public:
    myQueue(int x)
    {
        capacity=x;
        arr=new int[capacity];
        size=0;
    }
    bool isEmpty()
    {
        return size==0;
    }
    bool isfull()
    {
        return size == capacity;
    }
    void enqueue(int c)
    {
        if(isfull())
        {
            cout<<"Queue is full "<<endl;
            return;
        }
        arr[size]=c;
        size++;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty "<<endl;
            return;
        }
        for(int i=1;i<size;i++)
        {
            arr[i-1]=arr[i];
        }
        size --;
    }
    int getfront()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        return arr[0];
    }
     int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty " << endl;
            return -1;
        }
        return arr[size - 1];
    }
};

int main()
{
    myQueue q(5);

    q.enqueue(120);
    q.enqueue(20);
    q.enqueue(300);
    q.enqueue(3);
    q.enqueue(2);
    cout << "Front: " << q.getfront() << endl;

    q.dequeue();
    cout << "Front: " << q.getfront() << endl;
     cout << "Rear: " << q.getRear() << endl;

    q.enqueue(40);
    cout<<"after changing  last is = "<<q.getRear()<<endl;
    return 0;
}
