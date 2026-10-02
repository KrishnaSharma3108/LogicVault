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
// Find Height
int height(Node* root)
{
    if(root == NULL)
        return -1;
    return max(height(root->left),
               height(root->right)) + 1;
}
// Find Balance Factor
int balanceFactor(Node* root)
{
    if(root == NULL)
        return 0;

    return height(root->left) - height(root->right);
}
// Print Balance Factor of all nodes
void printBF(Node* root)
{
    if(root == NULL)
        return;
    cout << "Node " << root->data;
    cout << " -> BF = ";
    cout<< balanceFactor(root);
    cout<< endl;
    printBF(root->left);
    printBF(root->right);
}
int main()
{
    Node* root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);
    root->right->left = new Node(17);
    root->left->left->left = new Node(4);
    printBF(root);
    return 0;
}