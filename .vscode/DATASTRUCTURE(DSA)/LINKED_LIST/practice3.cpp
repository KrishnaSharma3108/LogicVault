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
/*class linkedlist
{
    //node *head;
    public:
    linkedlist()
    {
        head =NULL;
    }
};    */
void insertatend(int data,node* head)
{
    //node * head;
   node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            return ;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;  
    }  
int print(node* head)
    { 
      /* if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return 0;
        }*/
        cout<<head->data<<" ";
       return print(head->next);
    }   
int main()
{
    node* head=new node(1);
    head->next=new node(4);
    head->next->next=new node(5);
    head->next->next->next=new node(10);
    cout<<"list is = ";
    print(head);
    cout<<endl;
    return 0;
}