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
void findMaxIndex(Node* root, int index, int &mx)
{
    if(root == NULL)
    {
        return;
    }
    if(index > mx)
    {
        mx = index;
    }
    findMaxIndex(root->left, 2 * index + 1, mx);
    findMaxIndex(root->right, 2 * index + 2, mx);
}
void store(Node* root,int tree[],int bf[],int ht[],int index)
{
    if(root == NULL)
    {
        return;
    }
    tree[index] = root->data;
    bf[index] = balanceFactor(root);
    ht[index] = height(root);
    store(root->left,tree,bf,ht,2 * index + 1);
    store(root->right,tree,bf,ht,2 * index + 2);
}
void printTree(int tree[], int size)
{
    cout << "Tree Array      : ";
    for(int i = 0; i < size; i++)
    {
        if(tree[i] == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << tree[i] << " ";
        }
    }
    cout << endl;
}
void printBF(int bf[], int tree[], int size)
{
    cout << "Balance Factor  : ";
    for(int i = 0; i < size; i++)
    {
        if(tree[i] == -1)
        {
            cout << "X ";
        }
            else
        {
            cout << bf[i] << " ";
        }   
    }
    cout << endl;
}
void printHeight(int ht[], int tree[], int size)
{
    cout << "Height          : ";
    for(int i = 0; i < size; i++)
    {
        if(tree[i] == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << ht[i] << " ";
        }
    }    
    cout << endl;
    
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
    int mx = 0;
    findMaxIndex(root, 0, mx);
    int size = mx + 1;
    int* tree = new int[size];
    int* bf = new int[size];
    int* ht = new int[size];
    for(int i = 0; i < size; i++)
    {
        tree[i] = -1;
        bf[i] = -1;
        ht[i] = -1;
    }
    store(root, tree, bf, ht, 0);
    printTree(tree, size);
    printBF(bf, tree, size);
    printHeight(ht, tree, size);
    delete[] tree;
    delete[] bf;
    delete[] ht;
    return 0;
}