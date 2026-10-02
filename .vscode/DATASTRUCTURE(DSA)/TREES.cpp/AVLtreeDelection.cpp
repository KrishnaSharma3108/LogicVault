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
Node* minValueNode(Node* node)
    {
        Node* current = node;
        while (current->left != nullptr)
        {
            current = current->left;
        }   
        return current;
    }
Node* deleteNode(Node* root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if(root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    int bf = balanceFactor(root);
    if(bf > 1 && balanceFactor(root->left) >= 0)
    {
        return LLRotation(root);
    }
    if(bf > 1 && balanceFactor(root->left) < 0)
    {
        return LRRotation(root);
    }
    if(bf < -1 && balanceFactor(root->right) <= 0)
    {
        return RRRotation(root);
    }
    if(bf < -1 && balanceFactor(root->right) > 0)
    {
        return RLrotation(root);
    }
    return root;
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
    Node* root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->right->left = new Node(35);
    root->right->right = new Node(50);
    cout << "Before Deletion:"<<endl;
    preorder(root);
    int key;
    cout << "Enter node to delete: ";
    cin >> key;
    root = deleteNode(root, key);
    cout << "After Deletion:"<<endl;
    preorder(root);
    return 0;
}