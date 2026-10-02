#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node()
    {
        data=0;
        next=NULL;
    }
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist
{
    node *head;
    public:
    linkedlist()
    {
        head =NULL;
    }
    void insertathead(int data)
    {
        node *newnode=new node(data);
        if(head == NULL) 
        {
            head=newnode;
            head->next = head;
            return ;
        }
        node* temp = head;
        while (temp->next != head)
         {
            temp = temp->next;            
         }  
            newnode->next = head;
            temp->next = newnode;
            head = newnode;
            return;
        }
    void insertatend( int data )
    {
        node* newnode= new node(data);
        if(head==NULL)
        {
            head=newnode;
            head->next = head;
            return ;
        }
        node *temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        return ;
    }     
    void insertatanypos(int data,int pos)
    {
        node* newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            head->next = head;
            return ;
        }
        node* temp=head;
        for (int i = 1;i < pos-1 && temp->next != head; i++)
         {
                temp = temp->next;
         }
            newnode->next = temp->next;
            temp->next = newnode;
    }
    void deleteathead()
    {
         if (head == nullptr)
         {
            return;
         }
        if (head->next == head)
         {
            delete head;
            head = nullptr;
            return ;
         }
         node* temp=head;
         while (temp->next != head)
          {
                temp = temp->next;
          }
         node* delll = head;
            temp->next = head->next;
            head = head->next;
            delete delll;
            return ;
    }
    void deletefromend()
    {
         if (head == nullptr)
         {
            return;
         }
        if (head->next == head)
         {
            delete head;
            head = nullptr;
            return;
         }
         node* temp=head;
         node* prev=nullptr;
         while (temp->next != head)
          {
                prev = temp;
                temp = temp->next;
          }
            prev->next = head;
            delete temp;
            return ;
    }
    void deleteanypos(int pos)
    {
        if(pos < 1)
        {
            cout << "invalid position";
        }
        if (pos==1)
        {
            deleteathead();
        }
        node* temp=head;
        for(int i=1;i <pos -1 && temp->next != head ;i++)
        {
            temp=temp->next;
        }
        if (temp->next==head)
        {
            deletefromend();
        }
        node* store=temp->next;
        temp->next=store->next;
        delete store;
        return;
        
    }
    void print()
    {
        node *temp=head;
        if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        do
        {
             cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp !=head);
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
    cout << "Elements of the list are: "<<endl;
    list.print();
    cout << endl;
    cout<<" after insertion at end = "<<endl;
    list.insertatend(20000000);
    list.print();
    cout << endl;
    cout<<"after insertion at any postion = "<<endl;
    list.insertatanypos(22,2);
    list.print();
    cout<<endl;
    cout<<"after delection from head = "<<endl;
    list.deleteathead();
    list.print();
    cout<<endl; 
    cout<<"after delection from end = "<<endl;
    list.deletefromend();
    list.print();
    cout<<endl;
    cout<<" after detection rom any postion = "<<endl;
    list.deleteanypos(3);
    list.print();
    cout<<endl;
    return 0;
}