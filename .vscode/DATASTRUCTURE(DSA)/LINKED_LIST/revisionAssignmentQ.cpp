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
    node(int value)
    {
        data = value;
        next = NULL;
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
    void insertatrear(int data)
    {
        node *newnode = new node(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void deleteHead()
    {
        if(head == NULL)
        {
            cout << "List is empty"<<endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void deletepos(int pos)
    {
        if(head == NULL || pos < 1)
        {
            cout << "Invalid Position"<<endl;
            return;
        }
        if(pos == 1)
        {
            deleteHead();
            return;
        }
        node *curr = head;
        for(int i = 1; i < pos - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if(curr == NULL || curr->next == NULL)
        {
            cout << "Invalid Position"<<endl;
            return;
        }
        node *temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    void insertNumber(int value)
    {
        if(head == NULL)
        {
            insertathead(value);
            return;
        }
        if(head->data == value)
        {
            insertathead(value);
            return;
        }
        node *prev = head;
        node *currr = head->next;
        while(currr != NULL)
        {
            if(currr->data == value)
            {
                node *newnode = new node(value);
                prev->next = newnode;
                newnode->next = currr;
                cout << "Number inserted before existing number."<<endl;
                return;
            }
            prev = currr;
            currr = currr->next;
        }
        insertatrear(value);
        cout << "Number not found, inserted at end"<<endl;
    }
    void deleteByValue(int value)
    {
        if(head == NULL)
        {
            cout << "List is empty"<<endl;
            return;
        }
        node *temp = head;
        int pos = 1;
        while(temp != NULL)
        {
            if(temp->data == value)
            {
                deletepos(pos);
                cout << "First occurr n0. deleted."<<endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Number not found"<<endl;
    }
    void print()
    {
        if(head == NULL)
        {
            cout << "List is empty";
            return;
        }
        node *temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    linkedlist list;
    int size;
    cout << "Enter size of linked list: ";
    cin >> size;
    for(int i = 1; i <= size; i++)
    {
        list.insertatrear(i);
    }
    cout << "Linked List is : "<<endl;
    list.print();
    char choice;
    cout <<endl<< "Do you want to insert a number? (Y/N): "<<endl;
    cin >> choice;
    if(choice == 'Y' || choice == 'y')
    {
        int num;
        cout << "Enter number: ";
        cin >> num;
        list.insertNumber(num);
        cout << "Linked List after insertion is : "<<endl;
        list.print();
    }
    int del;
    cout <<endl<< "Enter number to delete: "<<endl;
    cin >> del;
    list.deleteByValue(del);
    cout << "Linked List after deletion is : "<<endl;
    list.print();
    cout << endl;
    return 0;
}