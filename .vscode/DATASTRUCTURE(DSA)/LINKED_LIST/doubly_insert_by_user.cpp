#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* prev;
    node* next;
    node(int value) 
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};
class linkedlist {
private:
    node* head;
public:
    linkedlist() 
    {
        head = nullptr;
    }
    void insertatEnd(int data)
     {
        node* newnode = new node(data);
        if (head == nullptr) 
        {
            head = newnode;
            return;
        }
        node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    void insertAtFront(int data) 
    {
        node* newnode = new node(data);
        if (head == nullptr) 
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    void insertanypos(int pos, int value)
     {
        node* newnode = new node(value);
        if (pos == 1)
        {
            if (head == nullptr)
            {
                head = newnode;
                return;
            }
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
            return;
        }
        node* curr = head;
        for (int i = 1; i < pos - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL) 
        {
            cout << "Invalid position!" << endl;
            return;
        }
        newnode->prev = curr;
        newnode->next = curr->next;
        curr->next = newnode;
        if (newnode->next != NULL) 
        {
            newnode->next->prev = newnode;
        }
    }
    void print() {
        node* temp = head;
        while (temp != nullptr) 
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    linkedlist list;
    int n, value;
    cout << " elements you want to insert at END = "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter value = ";
        cin >> value;
        list.insertatEnd(value);
    }
    cout << " elements you want to insert at FRONT = "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter value = ";
        cin >> value;
        list.insertAtFront(value);
    }
    cout << "Elements of the list are = "<<endl;
    list.print();
    string choice;
    cout << " want to insert at any position? (yes/no): "<<endl;
    cin >> choice;
    if (choice == "yes") 
    {
        int pos, val;
        cout << "Enter position = "<<endl;
        cin >> pos;
        cout << "Enter value = "<<endl;
        cin >> val;
        list.insertanypos(pos, val);
        cout <<endl<<"Updated list: "<<endl;
        list.print();
    }
    else 
    {
        cout << "No insertion done." << endl;
    }
    return 0;
}