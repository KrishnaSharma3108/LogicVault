#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};
class DoublyLinkedList
 {
public:
    Node* head;
    Node* tail;
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void deleteatend() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp;
}
    void print()
    {
        Node* temp = head;
        while (temp != nullptr)
         {
            cout << temp-> data << " ";
            temp = temp->next;
        }
    }
};
int main()
 {
    DoublyLinkedList dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    cout<<"list = "<<endl;
    dll.print();
    dll.deleteatend();
    cout<<endl<<"after delection = "<<endl;
    dll.print();
    return 0;
}