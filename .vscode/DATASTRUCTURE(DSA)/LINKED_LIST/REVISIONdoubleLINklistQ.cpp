#include<iostream>
#include<ctime>
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
        next = NULL;
        prev = NULL;
    }
};
class DoublyLL
{
    Node *head;
public:
    DoublyLL()
    {
        head = NULL;
    }
    void insertathead(int data)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void insertatrear(int data)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void insertatpos(int data, int pos)
    {
        if(pos == 1)
        {
            insertathead(data);
            return;
        }
        Node *temp = head;
        for(int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    int size()
    {
        int count = 0;
        Node *temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void searchLeft(int num)
    {
        Node *temp = head;
        while(temp != NULL)
        {
            if(temp->data == num)
            {
                cout << num << " Found on Left Side" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << num << " Not Found" << endl;
    }
    void searchRight(int num)
    {
        Node *temp = head;
        while(temp != NULL)
        {
            if(temp->data == num)
            {
                cout << num << " Found on Right Side" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << num << " Not Found" << endl;
    }
    void searchNumber(int num)
    {
        int mid = size() / 2;
        cout << "Middle Value = " << mid << endl;
        if(num <= mid)
        {
            searchLeft(num);
        }
        else
        {
            searchRight(num);
        }
    }
    void print()
    {
        Node *temp = head;
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
    clock_t start = clock();
    DoublyLL list;
    int n;
    cout << "Enter size of linked list: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        list.insertatrear(i);
    }
    cout << "Doubly Linked List: ";
    list.print();
    int num;
    cout <<endl<< "Enter number to search: ";
    cin >> num;
    
list.searchNumber(num);
clock_t end = clock();
double cpu_time =double( end - start)/CLOCKS_PER_SEC;
cout << "CPU Time = " << cpu_time << " seconds" << endl;
    return 0;
}