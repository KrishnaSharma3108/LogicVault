#include<iostream>
#include<vector>
#include<queue>
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
