#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include "TreeNode.h"
#include <queue>
#include <iostream>

class IntBinaryTree {
private:
    TreeNode *root; // Root pointer of binary tree

    // Private member functions
    void insert(TreeNode *&nodePtr, TreeNode *&newNode);
    void displayInOrder(TreeNode *nodePtr) const;
    int leafCount(TreeNode *nodePtr) const;
    int treeHeight(TreeNode *nodePtr) const;
    int treeWidth(TreeNode *nodePtr) const;

public:
    IntBinaryTree(); // Constructor
    void insertNode(int num);
    void displayTree() const;
    int getLeafCount() const;
    int getTreeHeight() const;
    int getTreeWidth() const;
};

#endif 
