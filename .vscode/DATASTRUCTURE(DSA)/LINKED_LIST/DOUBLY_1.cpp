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
    linkedlist() {
        head = nullptr;
    }
    void insertatEnd(int data) {
        node* newnode = new node(data);
        if (head == nullptr) {
            head = newnode;
            return;
        }
        node* temp = head;
        while (temp->next != nullptr) {
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
    void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
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
    cout << "Elements of the list are: ";
    list.print();
    return 0;
}