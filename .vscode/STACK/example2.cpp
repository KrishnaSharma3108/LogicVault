#include<iostream>
#include<vector>
using namespace std;
class stack
{
    int *arr;
    int capacity;
    int top;
    public:
    stack(int cap) 
    {
        capacity = cap;
        arr = new int[capacity];
        top = -1;
    }
    int push(int x) 
    {
        if (top == capacity - 1) {
            cout << "Stack Overflow "<<endl;
            return 1;
        }
        else
        {
        arr[++top] = x;
        }
    return 12 ;  
    }
    int pop() 
    {
        if (top == -1) {
            cout << "Stack Underflow "<<endl;
            return -1;
        }
        return arr[top--];
    }  
    int peek() 
    {
        if (top == -1) {
            cout << "Stack is Empty "<<endl;
            return -1;
        }
        return arr[top];
    }
     bool isEmpty() 
     {
        return top == -1;
    }
    bool isFull() 
    {
        return top == capacity - 1;
    }
};
int main()
{
    stack st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(10);
    st.push(13);
     cout << "Popped: " << st.pop() <<endl;
    cout << "Top element: " << st.peek() <<endl;
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") <<endl;
    cout << "Is stack full: " << (st.isFull() ? "Yes" : "No") <<endl;
    return 0;
}

