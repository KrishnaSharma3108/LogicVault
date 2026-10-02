#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int data) 
{
    if (root == NULL)
     {
        return new Node(data);
    }
    if (data < root->data) 
    {
        root->left = insert(root->left, data);
    } 
    else 
    {
        root->right = insert(root->right, data);
    }
    return root;
}
Node* tree(int arr[],int n)
{
    Node*root=NULL;
    for(int i=0;i<n;i++)
    {
        root=insert(root,arr[i]);
    }
    return root;
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    postorder(node->left);
     cout << node->data << " ";
    postorder(node->right); 
}
void preorder(Node* node)
    {
        if (node != nullptr) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }
int main()
{
    int arr[]={10,5,15,3,7,12,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=tree(arr,n);
    int choose;
    cout<<"1.Preorder \n2.Inorder \n3.Postorder \nEnter your choice: ";
    cin>>choose;
    switch(choose)
    {
        case 1:
            cout<<"Preorder of the Binary Tree: ";
            preorder(root);
            break;
        case 2:
        
            cout<<"Inorder of the Binary Tree: ";
            inorder(root);
            break;
        case 3:
            cout<<"Postorder  of the Binary Tree: ";
            postorder(root);
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
}