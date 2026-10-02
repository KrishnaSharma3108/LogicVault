#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    return max(height(root->left),height(root->right)) + 1;
}
int balanceFactor(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}
Node* rrRotation(Node* root)
{
    Node* child = root->right;
    root->right = child->left;
    child->left = root;
    return child;
}
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<endl << root->data<<" " << "BF=" << balanceFactor(root) ;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    //
    //       30
    //      /
    //     20
    //    /
    //   10
    //
    Node* root = new Node(30);
    root->right= new Node(40);
    root->right->right = new Node(50);
    root->right->right->right=new Node(55);
    cout << "Before LL Rotation:"<<endl;
    preorder(root);
    cout << "\nRoot BF = "<< balanceFactor(root)<<endl;
    root = rrRotation(root);
    cout << "\nAfter LL Rotation:"<<endl;
    preorder(root);
    cout << "\nRoot BF = "<< balanceFactor(root)<<endl;
    return 0;
}