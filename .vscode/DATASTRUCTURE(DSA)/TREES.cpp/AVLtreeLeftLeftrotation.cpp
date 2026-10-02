//Node* leftleftrotate(Node* root)
//{
  //  Node* child=root->left;
    //root->left=child->right;
    //child->right=child->root;
    //return child;
//}
/*#include <iostream>
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
Node* LLRotation(Node* root)
{
    Node* child = root->left;
    root->left = child->right;
    child->right = root;
    return child;
}
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node* root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(10);
    cout << "Before LL Rotation: ";
    preorder(root);
    root = LLRotation(root);
    cout << "\nAfter LL Rotation: ";
    preorder(root);
    return 0;
}
*/
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
Node* LLRotation(Node* root)
{
    Node* child = root->left;
    root->left = child->right;
    child->right = root;
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
    root->left = new Node(20);
    root->left->left = new Node(10);
    root->left->left->left=new Node(5);
    cout << "Before LL Rotation:"<<endl;
    preorder(root);
    cout << "\nRoot BF = "<< balanceFactor(root)<<endl;
    root = LLRotation(root);
    cout << "\nAfter LL Rotation:"<<endl;
    preorder(root);
    cout << "\nRoot BF = "<< balanceFactor(root)<<endl;
    return 0;
}