#include<iostream>
using namespace std;
class node 
{
public:
    int data;
    node* next;
    node* prev;
    node(int data)
    {
        this->data = data;
        next = prev = NULL;
    }
};
class linkedlist
{
    node *head, *tail;
public:
    linkedlist()
    {
        head = tail = NULL;
    }
    void insertathead(int data)
    {
        node* newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
            return;
        }
        newnode->next = head;
        newnode->prev = tail;
        head->prev = newnode;
        tail->next = newnode;
        head = newnode;
    }
    void insertatend(int data)
    {
        node* newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
            return;
        }
        newnode->prev = tail;
        newnode->next = head;
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
    void insertatanypos(int data, int pos)
    {
        if (pos == 1)
        {
            insertathead(data);
            return;
        }
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next != head; i++)
        {
            temp = temp->next;
        }
        if (temp == tail)
        {
            insertatend(data);
            return;
        }
        node* newnode = new node(data);
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    void deleteathead()
    {
        if (head == NULL) 
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        node* temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        delete temp;
    }
    void deletefromend()
    {
        if (head == NULL) 
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        node* temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        delete temp;
    }
    void deleteanypos(int pos)
    {
        if (head == NULL) return;
        if (pos == 1)
        {
            deleteathead();
            return;
        }
        node* temp = head;
        for (int i = 1; i < pos && temp != tail; i++)
        {
            temp = temp->next;
        }
        if (temp == tail)
        {
            deletefromend();
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }
        node* temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};
int main()
{
    linkedlist list;
    int choice, data, pos;
    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Head\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Head\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Position\n";
        cout << "7. Display\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                list.insertathead(data);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                list.insertatend(data);
                break;
            case 3:
                cout << "Enter data and position: ";
                cin >> data >> pos;
                list.insertatanypos(data, pos);
                break;
            case 4:
                list.deleteathead();
                break;
            case 5:
                list.deletefromend();
                break;
            case 6:
                cout << "Enter position: ";
                cin >> pos;
                list.deleteanypos(pos);
                break;
            case 7:
                list.print();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 0);
    return 0;
}