#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node()
    {
        data = 0;
        next = NULL;
    }

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class linkedlist
{
    node *head;
public:
    linkedlist()
    {
        head = NULL;
    }
    void insertathead(int data)
    {
        node *newnode = new node(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    void frequency()
    {
        node* temp = head;
        int odd = 0, even = 0;
        while(temp != NULL)  
        {
            if(temp->data % 2 == 0)
                even++;
            else
                odd++;
            temp = temp->next;
        }
        cout << "Even numbers: " << even << endl;
        cout << "Odd numbers: " << odd << endl;
    }
    void print()
    {
        node *temp = head;
    
        if(head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linkedlist l;
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;
        l.insertathead(value);
    }
    cout << "Linked List: "<<endl;
    l.print();
    l.frequency();
    return 0;
}