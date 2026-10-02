#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
void preorder(Node* root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = 0, temp = n;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    Node* root = NULL;
    temp = rev;
    while (temp > 0)
    {
        int num = temp % 10;
        root = insert(root, num);
        temp /= 10;
    }
    int choice;
    cout << "\n1. Preorder\n2. Inorder\n3. Postorder\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Preorder Traversal: ";
            preorder(root);
            break;
        case 2:
            cout << "Inorder Traversal: ";
            inorder(root);
            break;
        case 3:
            cout << "Postorder Traversal: ";
            postorder(root);
            break;
        default:
            cout << "Invalid choice!";
    }
    return 0;
}