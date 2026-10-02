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
    return max(height(root->left), height(root->right)) + 1;
}
int balanceFactor(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}
Node* LLRotation(Node* root)
{
    Node* child = root->left;
    root->left = child->right;
    child->right = root;
    return child;
}
Node* RRRotation(Node* root)
{
    Node* child = root->right;
    root->right = child->left;
    child->left = root;
    return child;
}
Node* LRRotation(Node* root)
{
    root->left = RRRotation(root->left);
    return LLRotation(root);
}
Node* RLrotation(Node* root)
{
    root->right=LLRotation(root->right);
    return RRRotation(root);
}
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " BF=" << balanceFactor(root) << endl;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    // LR Imbalanced Tree
    //
    //       30
    //      /
    //    10
    //      \
    //       20
    //
/* Node* root = new Node(30);
    root->left = new Node(10);
    root->left->right = new Node(20);
    cout << "Before LR Rotation:\n";
    preorder(root);
    cout << "Root Balance Factor = "<< balanceFactor(root) << endl;
    root = LRRotation(root);
    cout << "After LR Rotation:\n";
    preorder(root);
    cout << "Root Balance Factor = "<< balanceFactor(root) << endl;
    return 0;
    */    
    Node *root = new Node(30);
    root->right = new Node(40);
    root->right->left = new Node(35);
    //updateHeight(root);
    cout << "Before rl Rotation:\n" ;
    preorder(root);
    cout << "Root BF = " << balanceFactor(root) ;
    root = RLrotation(root);
    cout << "\nAfter rL Rotation:\n";
    preorder(root);
    cout << "Root BF = " << balanceFactor(root);
    return 0;
}
