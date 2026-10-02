#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
void levelorderrec(Node *root, int level, vector<vector<int>> &res)
{
    if (root == nullptr)
    {
        return;
    }
    // Add a new level to the result if needed
    if (res.size() <= level)
    {
        res.push_back({});
    }
    res[level].push_back(root->data);
    levelorderrec(root->left, level + 1, res);
    levelorderrec(root->right, level + 1, res);
}
vector<vector<int>> levelOrder(Node *root)
{
    // Stores the result level by level
    vector<vector<int>> res;
    levelorderrec(root, 0, res);
    return res;
}
int main()
{
    Node *root = new Node(5);
    root->left = new Node(12);
    root->right = new Node(13);
    root->left->left = new Node(7);
    root->left->right = new Node(14);
    root->right->right = new Node(2);
    root->left->left->left = new Node(17);
    root->left->left->right = new Node(23);
    root->left->right->left = new Node(27);
    root->left->right->right = new Node(3);
    root->right->right->left = new Node(8);
    root->right->right->right = new Node(11);
    vector<vector<int>> res = levelOrder(root);
    for (vector<int> level : res)
    {
        for (int val : level)
        {
            cout << val << "        "<<"  ";
        }
        cout << endl;
    }
    return 0;
}