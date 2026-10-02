#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class BinaryTree {
public:
    Node* root;
    BinaryTree() 
    {
         root = nullptr;
     }
    void preorderTraversal(Node* node)
    {
        if (node != nullptr)
        {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }
};
int main()
{
    BinaryTree btree;
    btree.root = new Node(1);
    btree.root->left = new Node(2);
    btree.root->right = new Node(3);
    btree.root->left->left = new Node(4);
    btree.root->left->right = new Node(5);
    btree.root->right->left = new Node(6);
    btree.root->right->right = new Node(7);
    cout << "Preorder traversal of the binary tree is:"
         << endl;
    btree.preorderTraversal(btree.root);
    cout << endl;
    return 0;
}