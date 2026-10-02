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
    void frequency()
    {
        node* temp=head;
        int odd=0,even=0;
        while(temp->next!=NULL)
        {
            if(temp->data%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            temp=temp->next;
        }
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
    cout<<"even "<<even<<endl;
}; 
