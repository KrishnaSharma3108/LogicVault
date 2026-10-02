#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val): data(val), left(nullptr), right(nullptr) {}
};
// Function to insert nodes in level order (for testing)
Node* insertLevelOrder(Node* root, int data) {
    Node* newNode = new Node(data);
    if (!root) return newNode;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (!temp->left) {
            temp->left = newNode;
            return root;
        } else {
            q.push(temp->left);
        }

        if (!temp->right) {
            temp->right = newNode;
            return root;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}

// Function to delete a node with no child or one child
Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    // If the node to delete is the root
    if (root->data == key) {
        // No child
        if (!root->left && !root->right) {
            delete root;
            return nullptr;
        }
        // One child
        else if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            cout << "Node has two children. This code handles only 0 or 1 child.\n";
            return root;
        }
    }

    // Recursively search in left and right subtrees
    if (root->left && root->left->data == key) {
        Node* target = root->left;
        if (!target->left && !target->right) { // No child
            delete target;
            root->left = nullptr;
        }
        else if (!target->left) { // One child (right)
            root->left = target->right;
            delete target;
        }
        else if (!target->right) { // One child (left)
            root->left = target->left;
            delete target;
        }
        else {
            cout << "Node has two children. Skipping deletion.\n";
        }
        return root;
    }

    if (root->right && root->right->data == key) {
        Node* target = root->right;
        if (!target->left && !target->right) { // No child
            delete target;
            root->right = nullptr;
        }
        else if (!target->left) { // One child (right)
            root->right = target->right;
            delete target;
        }
        else if (!target->right) { // One child (left)
            root->right = target->left;
            delete target;
        }
        else {
            cout << "Node has two children. Skipping deletion.\n";
        }
        return root;
    }

    // Continue searching
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    return root;
}

// Function to print tree in level order
void printLevelOrder(Node* root) {
    if (!root) {
        cout << "Tree is empty.\n";
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    cout << "\n";
}

int main() {
    Node* root = nullptr;

    // Create a sample tree
    root = insertLevelOrder(root, 1);
    root = insertLevelOrder(root, 2);
    root = insertLevelOrder(root, 3);
    root = insertLevelOrder(root, 4);
    root = insertLevelOrder(root, 5);

    cout << "Original Tree (Level Order): ";
    printLevelOrder(root);

    // Delete a leaf node
    root = deleteNode(root, 5);
    cout << "After deleting leaf node 5: ";
    printLevelOrder(root);

    // Delete a node with one child
    root = deleteNode(root, 2);
    cout << "After deleting node 2 (one child): ";
    printLevelOrder(root);

    return 0;
}