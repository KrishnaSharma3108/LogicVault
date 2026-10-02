#include<iostream>
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
Node* deleteNode(Node* root, int key) 
{
    if (root == NULL) 
    {
        return root;
    }
    queue<Node*> q;
    q.push(root);
    Node* target = NULL;
    Node* temp;
    while (!q.empty())
     {
        temp = q.front();
        q.pop();
        if (temp->data == key)
        {
            target = temp;
        }
        if (temp->left) 
        {
            q.push(temp->left);
        }
        if (temp->right) 
        {
            q.push(temp->right);
        }
    }
    if (target != NULL) 
    {
        target->data = temp->data; 
        q.push(root);
        while (!q.empty()) 
        {
            Node* curr = q.front();
            q.pop();
            if (curr->left) 
            {
                if (curr->left == temp)
                 {
                    delete curr->left;
                    curr->left = NULL;
                    break;
                } else 
                {
                    q.push(curr->left);
                }
            }
            if (curr->right)
             {
                if (curr->right == temp)
                 {
                    delete curr->right;
                    curr->right = NULL;
                    break;
                } 
                else
                {
                    q.push(curr->right);
                }
            }
        }
    }
    return root;
}
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Before deletion: ";
    inorder(root);
    root = deleteNode(root, 2);
    cout << "After deletion: ";
    cout << "After deletion: ";
    inorder(root);
    return 0;
}