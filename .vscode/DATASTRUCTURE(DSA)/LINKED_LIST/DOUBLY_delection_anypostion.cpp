#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* prev;
    node* next;
    node(int value) {
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
    void insertAtFront(int data) {
        node* newnode = new node(data);
        if (head == nullptr) {
            head = newnode;
            return;
        }
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    void insertanypos(int pos, int value) {
        node* newnode = new node(value);
        if (pos == 1) {
            if (head == nullptr) {
                head = newnode;
                return;
            }
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
            return;
        }
        node* curr = head;
        for (int i = 1; i < pos - 1 && curr != NULL; ++i) {
            curr = curr->next;
        }
        if (curr == NULL) {
            cout << "Invalid position!" << endl;
            return;
        }
        newnode->prev = curr;
        newnode->next = curr->next;
        curr->next = newnode;
        if (newnode->next != NULL) {
            newnode->next->prev = newnode;
        }
    }
    void deletehead() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
    }
    void deleteatend() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
    }
    void deleteanypos(int pos)
    {
    //node* delPos( int pos) 
            node* temp1=head;
            if(pos==1)
            {
                deletehead();
                return;
            }
        for (int i = 1; i < pos && temp1 != NULL; i++) 
        {
            temp1 = temp1->next;
        }
        if (temp1 == NULL)
        {
            return ;
        }
        if (temp1->prev != NULL)
        {
            temp1->prev->next = temp1->next;
        }
    if (temp1->next != NULL)
    {
        temp1->next->prev = temp1->prev;
    }

    delete temp1;
    return ;
    }
    void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
  
};
int main() {
    linkedlist list;
    list.insertatEnd(34);
    list.insertatEnd(48);
    list.insertatEnd(37);
    list.insertatEnd(25);
    list.insertatEnd(100);
    list.insertatEnd(3000);
    list.insertAtFront(500);
    list.insertanypos(2, 34000);
    cout << "Elements of the list are: ";
    list.print();
    list.deletehead();
    cout << "After deleting head: ";
    list.print();
    list.deleteatend();
    cout << "After deleting end: ";
    list.print();
    cout<<"after deletion on specific position ";
    list.deleteanypos(6);
    list.print();
    return 0;
}