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
 void delete2ndlast()
 {
    int n=0;
    node* temp=head;
    if(temp==nullptr||temp->next==nullptr)
    {
        cout<<"not enough node to delete"<<endl;
        return ;
    }
    while(temp !=NULL)
    {
        n++;
        temp=temp->next;
    }
    if(n==2)
    {
        node* del=head;
        head=head->next;
        delete del;
        del=nullptr;
        return;
    }
    temp=head;
    for(int i=1;i<n-2;i++)
    {
        temp=temp->next;
    }
    node* del=temp->next;
    temp->next=del->next;
    delete del;
    del==nullptr;
    return ;
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
    cout << "Elements of the list are: ";
    list.print();
    cout << endl;
    cout<<"after delection at 2nd last node = "<<endl;
    list.delete2ndlast();
    list.print();
    return 0;

}