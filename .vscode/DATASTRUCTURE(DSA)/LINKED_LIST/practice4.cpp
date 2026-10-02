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
    void delete1()
    {
        node*temp=head;
        if(head==NULL)
        {
            cout<<"list is empty";
            return ; 
        }
        head=head->next;
        delete temp;
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void deletealternate()
    {
        node* temp=head;
        if(head==NULL)
        {
            cout<<"list is empty";
            return ; 
        }
        while(temp!=NULL&&temp->next!=NULL)
        { 
           node* curr = temp->next;  
            temp->next = curr->next;  
            delete curr;               
            temp = temp->next;
        }
    }
     void print()
    {
        node *temp = head;
    
        if(head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
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
   linkedlist list;
    list.insertathead(48);
    list.insertathead(37);
    list.insertathead(25);
    list.insertathead(100);
    list.insertathead(3000);
    list.insertathead(500);
    list.insertathead(89);
    list.insertathead(456);
    cout << "Elements of the list are: ";
    list.print();
    cout << endl;
    cout << "After deleting head and last: ";
    list.delete1();
    list.print();
    cout<<endl;
    cout<<"after deleting alternate :";
    list.deletealternate();
    list.print();
    cout<<endl;
    return 0;
}