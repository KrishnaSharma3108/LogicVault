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
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    void insertatrear(int data)
    {
        node *newnode = new node(data);

        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void deleteTail() 
    {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    linkedlist list;
    list.insertathead(48);
    list.insertathead(37);
    list.insertathead(25);
    list.insertathead(100);
    list.insertatrear(3000);
    cout << "Elements of the list are: ";
    list.print();
    cout << endl;
    cout << "After deleting head: ";
    list.deleteTail();
    list.print();
    cout << endl;
    return 0;
}