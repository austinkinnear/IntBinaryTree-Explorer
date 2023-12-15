#ifndef TREENODE_H
#define TREENODE_H

struct TreeNode {
    int value;        // Node value
    TreeNode *left;   // Pointer for left child node
    TreeNode *right;  //  Pointer for right child node

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

#endif 
