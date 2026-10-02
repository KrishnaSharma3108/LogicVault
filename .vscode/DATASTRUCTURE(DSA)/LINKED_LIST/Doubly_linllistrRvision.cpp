#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
class doubly_ll
{
    Node *head;

public:
    // Default constructor
    doubly_ll()
    {
        head = NULL;
    }
    void insertathead(int data)
    {
        Node *newnode = new Node(data);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    void inseratrear(int data)
    {

        Node *newnode = new Node(data);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        temp = temp->next;
    }
    void insertatpos(int data, int pos)
    {
        if (pos == 1)
        {
            insertathead(data);
            return;
        }
        Node *current = head;
        Node *newnode = new Node(data);
        for (int i = 1; i < pos - 1 && current != nullptr; i++)
        {
            current = current->next;
        }
        newnode->prev = current;
        newnode->next = current->next;
        current->next = newnode;
        // if new node is not last node toh usko agli node se connect karne ke liye
        if (newnode->next != nullptr)
        {
            newnode->next->prev = newnode;
        }
    }
    void deletehead()
    {
        if (head == nullptr)
        {
            cout << " link list is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
    }
    void deleteatend()
    {
        if (head == nullptr)
        {
            cout << " link list is empty";
            return;
        }
        if (head->next == nullptr)
        {
            head = nullptr;
            delete head;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->prev->next = nullptr;
        delete temp;
        return;
    }
    void deleteatpos(int pos)
    {
        if (head == nullptr)
        {
            cout << " link list is empty";
            return;
        }
        if (pos == 1)
        {
            deletehead();
            return;
        }
        Node *curr = head;
        for (int i = 1; i < pos && curr != nullptr; i++)
        {
            curr = curr->next;
        }
        Node* temp=curr;
        cout <<temp->data;
        curr->prev->next = curr->next; 
        if (curr->next != nullptr)
        {
            curr->next->prev = curr->prev;
        }
        cout <<"c";
        delete temp;
        return;
    }
    void deletebefore(int data)
    {
        if (head == nullptr)
        {
            cout << " link list is empty";
            return;
        }
        if (head->data == data)
        {
            cout << "no node before head node";
            return;
        }
        Node *curr = head;
        while (curr != nullptr && curr->data != data)
        {
            curr = curr->next;
        }
        Node *deletebefore = curr->prev;
        if (curr == nullptr)
        {
            cout << "element not found in list";
            return;
        }
        if (curr->prev == head)
        {
            deletehead();
            return;
        }
        curr->prev->prev->next = curr;
        curr->prev = curr->prev->prev;
        delete deletebefore;
        return;
    }
    void deleteafter(int data)
    {
        if (head == nullptr)
        {
            cout << " link list is empty";
            return;
        }
        Node *curr = head;
        while (curr != nullptr && curr->data != data)
        {
            curr = curr->next;
        }
        if (curr == nullptr)
        {
            cout << "element not found in list";
            return;
        }
        if (curr->next == nullptr)
        {
            cout << "no node after last node";
            return;
        }
        Node *deleteafter = curr->next;
        curr->next = deleteafter->next;
        if (deleteafter->next != nullptr)
        {
            deleteafter->next->prev = curr;
        }
        delete deleteafter;
        return;

    }
    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void printulta()
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }   
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp=temp->prev;
        }
        
    }
};
int main()
{
    doubly_ll list;
    list.insertathead(10);
    list.insertathead(20);
    list.inseratrear(22);
    list.insertathead(30);
    list.inseratrear(33);
    list.insertatpos(44, 3);
    list.insertatpos(64, 3);
    list.deletehead();
    list.deleteatend();
    list.deleteatpos(1);
    cout << "elements of list are:";
    list.print();
    cout << "\nreverse elements: ";
    list.printulta();
    // // 1st
    // Node *head = new Node(10);
    // // 2nd
    // head->next = new Node(11);
    // head->next->prev = head;
    // // 3rd
    // head->next->next = new Node(12);
    // head->next->next->prev = head->next;
    // // 4th
    // head->next->next->next = new Node(13);
    // head->next->next->next->prev = head->next->next;
}