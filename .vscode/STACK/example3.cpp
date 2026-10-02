#include <iostream>
using namespace std;
class stack
{
    int *brr;
    int top;
    public:
    stack()
    {
        brr = new int[10];
        top = -1;
    }
    void push(int val) {
        if (top == 9) {
            cout << "Stack Overflow\n";
            return;
        }
        brr[++top] = val;
    }
    void print() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >=0; i--) {
            cout << brr[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    stack st;
    int arr[10] = {10, 20, 10, 30, 40, 50, 10, 20, 5, 9};

    for(int i=0;i<10;i++)
    {
        st.push(arr[i]);
    }
    st.print();
    return 0;
}    