#include "IntBinaryTree.h"
using namespace std;

// Constructor to initialize the binary tree with a null root
IntBinaryTree::IntBinaryTree() : root(nullptr) {}

// Public member functions
void IntBinaryTree::insertNode(int num) {
    TreeNode *newNode = new TreeNode(num); // Create a new node
    insert(root, newNode); // Insert the node
}

// Display in-order traversal
void IntBinaryTree::displayTree() const {
    displayInOrder(root);
}

// Return leaf nodes
int IntBinaryTree::getLeafCount() const {
    return leafCount(root);
}

// Return height
int IntBinaryTree::getTreeHeight() const {
    return treeHeight(root);
}

// Return width 
int IntBinaryTree::getTreeWidth() const {
    return treeWidth(root);
}



void IntBinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode) {
    if (nodePtr == nullptr) {
        nodePtr = newNode; // Insert node
    } else if (newNode->value < nodePtr->value) {
        insert(nodePtr->left, newNode); // Search left branch
    } else {
        insert(nodePtr->right, newNode); // Search right branch
    }
}

// Display the binary tree in in-order.
void IntBinaryTree::displayInOrder(TreeNode *nodePtr) const {
    if (nodePtr) {
        displayInOrder(nodePtr->left); // Left child
        cout << nodePtr->value << " "; // Node
        displayInOrder(nodePtr->right); // Right child
    }
}

// Count leaf nodes in the binary tree
int IntBinaryTree::leafCount(TreeNode *nodePtr) const {
    if (nodePtr == nullptr) {
        return 0; 
    } else if (nodePtr->left == nullptr && nodePtr->right == nullptr) {
        return 1; // Leaf node found
    } else {
        return leafCount(nodePtr->left) + leafCount(nodePtr->right);
    }
}
// Height
int IntBinaryTree::treeHeight(TreeNode *nodePtr) const {
    if (nodePtr == nullptr) {
        return 0; 
    } else {
        return 1 + max(treeHeight(nodePtr->left), treeHeight(nodePtr->right));
    }
}

// Width 
int IntBinaryTree::treeWidth(TreeNode *nodePtr) const {
    if (nodePtr == nullptr) {
        return 0; 
    }
    queue<TreeNode*> q;
    q.push(nodePtr); 
    int maxWidth = 0; 
    while (!q.empty()) {
        int count = q.size(); 
        maxWidth = max(maxWidth, count); 
        while (count--) { 
            TreeNode *temp = q.front();
            q.pop();
            if (temp->left != nullptr) q.push(temp->left); // Left child
            if (temp->right != nullptr) q.push(temp->right); // Right child
        }
    }
    return maxWidth;
}
