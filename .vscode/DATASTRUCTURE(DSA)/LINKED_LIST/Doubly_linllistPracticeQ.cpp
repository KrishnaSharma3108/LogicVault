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
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void inseratrear(int data)
    {

        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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
        Node *newNode = new Node(data);
        for (int i = 1; i < pos - 1 && current != nullptr; i++)
        {
            current = current->next;
        }
        newNode->prev = current;
        newNode->next = current->next;
        current->next = newNode;
        // if new node is not last node toh usko agli node se connect karne ke liye
        if (newNode->next != nullptr)
        {
            newNode->next->prev = newNode;
        }
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
        Node *prev = head;
        Node *currr = head->next;
        while(currr != NULL)
        {
            if(currr->data == value)
            {
                Node *NewNode = new Node(value);
                prev->next = NewNode;
                NewNode->next = currr;
                cout << "Number inserted before existing number."<<endl;
                return;
            }
            prev = currr;
            currr = currr->next;
        }
        inseratrear(value);
        cout << "Number not found, inserted at end"<<endl;
    }
   int search(int z)
   {
    int c=0;
    Node* temp=head;
    while(temp->next!= nullptr)
    {
        temp=temp->next;
        c++;
    }
    while(temp!= NULL)
    {
        if(temp->data==z)
        {
            int pos=c;
            break;
        }
        temp=temp->prev;
        c++;
    }
    return c;
   }
   int search2(int n)
   {
    int c=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(n==temp->data)
        {
            int pos=c;
            break;
        }
        temp=temp->next;
        c++;
    }
    return c;
   }

   void search3(int a)
   {
    int val=0;
    Node* temp=head;
    while(temp != nullptr)
    {
        val++;
        temp=temp->next;
    }
    int mid=val/2;
    if(a<mid)
    {
        search(a);
    }
    else if (a>mid)
    {
        search2(a);
    }
    
   }
   void print()
   {
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }
};  
int main()
{
    clock_t start = clock();
    doubly_ll list;
    list.print();
    clock_t end = clock();
    double cpu_time = double(end - start) / CLOCKS_PER_SEC;

    cout << "CPU time: " << cpu_time << " seconds" <<endl;
    return 0;

}  