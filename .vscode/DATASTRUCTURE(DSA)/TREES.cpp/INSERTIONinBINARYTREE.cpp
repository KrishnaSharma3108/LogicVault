#include<iostream>
#include<vector>
using namespace std;
class node
{
public:
    int data;
    node* right;
    node* left;

    node(int value)
    {
        data = value;
        right = nullptr;
        left = nullptr;
    }
};
node* insert(node* root, int value)
{
    node* newnode = new node(value);//7
    //cout<<newnode->data<<endl;
    if (root == nullptr)
    {
        return newnode;
    }
    node* current = root;
    node* parent = nullptr;
    while (1)
    {
        parent = current;
       // cout<<parent->data<<endl;
        if (value < current->data)
        {
            current = current->left;
            if (current == nullptr)
            {
                parent->left = newnode;
                return root;
            }
        }
        else
        {
            current = current->right;
            if (current == nullptr)
            {
                parent->right = newnode;
                return root;
            }
        }
    }
}
void inorder(node* root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);
    cout << "Inorder Traversal of Binary Tree: ";
    inorder(root);
    cout << endl;
    insert(root, 7);
    cout << "Inorder Traversal after Insertion: ";
    inorder(root);
    return 0;
}