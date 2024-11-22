#include <iostream>
using namespace std;

// Structure to represent a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function for In-order Traversal (Left, Root, Right)
void inOrderTraversal(Node* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);  // Traverse left subtree
    cout << root->data << " ";     // Visit the root
    inOrderTraversal(root->right); // Traverse right subtree
}

// Function for Pre-order Traversal (Root, Left, Right)
void preOrderTraversal(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";     // Visit the root
    preOrderTraversal(root->left); // Traverse left subtree
    preOrderTraversal(root->right);// Traverse right subtree
}

// Function for Post-order Traversal (Left, Right, Root)
void postOrderTraversal(Node* root) {
    if (root == nullptr) return;
    postOrderTraversal(root->left);  // Traverse left subtree
    postOrderTraversal(root->right); // Traverse right subtree
    cout << root->data << " ";       // Visit the root
}

// Function to insert a new node in the binary tree
Node* insert(Node* root, int data) {
    // If the tree is empty, return a new node
    if (root == nullptr)
        return new Node(data);

    // Otherwise, recur down the tree
    if (data < root->data)
        root->left = insert(root->left, data); // Insert in the left subtree
    else
        root->right = insert(root->right, data); // Insert in the right subtree

    return root; // Return the unchanged root pointer
}

// Main function to construct the binary tree and display the traversals
int main() {
    Node* root = nullptr;
    int n, value;

    // Input the number of nodes
    cout << "Enter the number of nodes in the binary tree: ";
    cin >> n;

    // Create the binary tree by inserting nodes
    cout << "Enter the values to insert into the tree:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);  // Insert the new value into the tree
    }

    // Display the tree traversals
    cout << "\nIn-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "\nPre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "\nPost-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
