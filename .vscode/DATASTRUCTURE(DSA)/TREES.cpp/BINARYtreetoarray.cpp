#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};
void binary_to_array(Node *root, int arr[], int sz, int i)
{
    if (root == nullptr)
    {
        return;
    }
    binary_to_array(root->left, arr, sz, i + 1);
    arr[i] = root->data;
    cout << arr[i] << " ";
    binary_to_array(root->right, arr, sz, i + 1);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);
    root->right->left = new Node(12);
    int arr[7];
    int sz = sizeof(arr) / sizeof(int);
    binary_to_array(root, arr, sz, 0);
    // for(int i=0;i<7;i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}