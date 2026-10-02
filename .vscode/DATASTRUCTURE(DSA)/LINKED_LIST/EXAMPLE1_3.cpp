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
            return ;
        }
        newnode->next=this->head;
        this->head=newnode;
    }
    void insertatrear(int data)
    {
        node *newnode = new node(data);
        
        
        if (head == NULL) {
            head = newnode;
            return;
        } 
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newnode;
        
    }
    void insertpos(int pos,int data)
    {
       // cout<<"start";
        if(pos<1)
        {
            cout<<"unable to insert"<<endl;
            return;
        }
         node* newnode =new node(data);
        if(pos==1)
        {
            insertathead(data);
            return;
        }
        node* temp=head;
        int count =1;
        while(temp!= NULL &&count<pos-1)
        {
            temp=temp->next;
            count++;
        }
        if(temp==NULL)
        {
            cout<<"postion out of range"<<endl;
           // delete newnode;
            return;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
  void print()
    {
        node *temp=head;
        if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        while(temp !=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    linkedlist list;
    list.insertathead(48);
    list.insertathead(37);
    list.insertathead(25);
    list.insertathead(100);
    list.insertatrear(3000);
    list.insertpos(6,50);
    cout << "Elements of the list are: ";
    list.print();
    cout << endl;

    return 0;

}