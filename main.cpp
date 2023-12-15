/******************************************************************************

Austin Kinnear
Chapter 21 Programming Assignment
12/10/23 - 12/14/23

*******************************************************************************/
#include <iostream>
#include "IntBinaryTree.h"
using namespace std; 

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Insert one integer into the tree" << endl;
    cout << "2. Display the tree (in order)" << endl;
    cout << "3. Display Leaf Count" << endl;
    cout << "4. Display Tree Height" << endl;
    cout << "5. Display Tree Width" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

// Main function
int main() {
    IntBinaryTree tree; // Create an instance
    bool running = true; // Control variable for the menu loop
    int choice; // To hold user's menu choice
    int number; // To hold number inserted into tree

    // Menu loop
    while (running) {
        displayMenu();
        cin >> choice; // Get users choice

        switch (choice) {
            case 1: // Insert number into tree
                cout << "Enter a number to insert into the tree: ";
                cin >> number;
                tree.insertNode(number);
                cout << number << " has been inserted into the tree." << endl;
                break;
            case 2: // Display tree in-order
                cout << "Displaying the tree in order: ";
                tree.displayTree();
                cout << endl;
                break;
            case 3: // Display leaf count
                cout << "Leaf count: " << tree.getLeafCount() << endl;
                break;
            case 4: // Display tree height
                cout << "Tree height: " << tree.getTreeHeight() << endl;
                break;
            case 5: // Display tree width
                cout << "Tree width: " << tree.getTreeWidth() << endl;
                break;
            case 6: // Exit program
                running = false;
                break;
            default: 
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
