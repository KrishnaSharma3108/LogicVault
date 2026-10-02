#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
void levelorder(node* root)
{
    if(root==nullptr)
    {
        return;
    }
    //vector<vector<int>>=new vector<vector<int>>();

    vector<node*> q;
    q.push_back(root);
    
    //cout<<q[0]<<endl;
    
    while(!q.empty())
    {
        node* temp=q[0];
        cout<<temp->data<<" "<<endl;
         q.erase(q.begin());
        if(temp->left!=nullptr)
        {
            cout<<temp->left->data<<" ";
            q.push_back(temp->left);
        }
        if(temp->right!=nullptr)
        {
            cout<<temp->right->data<<" ";
            q.push_back(temp->right);
        }
        cout<<endl;
    }

}
int main() 
{
    node* root=new node(1);
    root->left=new node(2);     
    root->right=new node(3);
    root->left->left=new node(4);   
    root->left->right=new node(5);
    root->right->right=new node(6);         
    cout<<"Level Order Traversal of Binary Tree: "<<endl;
    levelorder(root); 

    return 0;
}
