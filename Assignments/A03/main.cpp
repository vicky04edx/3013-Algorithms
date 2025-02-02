/*****************************************************************************
*                    
*  Author:           Victoria Heredia and Proffessor Terry Griffin
*  Email:            vdheredia1128@my.msutexas.edu
*  Label:            A03
*  Title:            Assignment 3: BST Delete
*  Course:           3013 - Advanced Structures and Algorithms
*  Semester:         Spring 2025
* 
*   Description:
*        This program demonstrates the deletion of nodes from a Binary Search Tree (BST). 
*        It handles three cases of node deletion:
*        1. Deleting a leaf node (no children).
*        2. Deleting a node with one child.
*        3. Deleting a node with two children.
*        The program also includes functions for inserting nodes, printing the tree, and finding the minimum value in a subtree.
* 
*  Usage: 
*     Compile and run the program. The program will create a BST, insert nodes, and demonstrate deletion for each case.
* 
*  Files:            main.cpp
*****************************************************************************/
#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = right = nullptr;
  }
};

class Bst {
private:
  Node *root;
  void _insert(Node *&sub_root, int x) {
    if (sub_root == nullptr) {
      sub_root = new Node(x);
    } else {
      if (x < sub_root->data) {
        _insert(sub_root->left, x);
      } else {
        _insert(sub_root->right, x);
      }
    }
  }
  void _print(Node *root) {
    if (!root) {
      return;
    }
  
    _print(root->right);
    cout << root->data << " ";
    _print(root->left);
  }

   // Find the smallest value in a subtree (for deletion case 3)
   // Private helper function to find the minimum value in a subtree
  Node* _findMin(Node* sub_root) {
    while (sub_root->left != NULL) {
      sub_root = sub_root->left;                      // Traverse to the leftmost node
    }
    return sub_root;
  }
  // Private helper function to delete a node from the BST
  void deleteNode(Node *&sub_root, int data) {
    if (sub_root == NULL) {
      return;  // Node not found
    }

    // Traverse the tree to find the node to delete
    if (data < sub_root->data) {
      deleteNode(sub_root->left, data);  // Search in the left subtree
    } else if (data > sub_root->data) {
      deleteNode(sub_root->right, data); // Search in the right subtree
    } 
    else 
      {
        // Case 1: Node is a leaf (no children)
        if (sub_root->left == NULL && sub_root->right == NULL) 
        {
          delete sub_root;  // Delete the node
          sub_root = NULL;  // Set the pointer to NULL
        }
        // Case 2: Node has one child
        // Part 1: Right child exists
        else if (sub_root->left == NULL) 
        {
          Node *temp = sub_root;       // Temporary pointer to the node
          sub_root = sub_root->right;  // Replace the node with its right child
          delete temp;                 // Delete the node
        }
        // Part 2: Left child exists
        else if (sub_root->right == NULL) 
        {
          Node *temp = sub_root;       // Temporary pointer to the node
          sub_root = sub_root->left;   // Replace the node with its left child
          delete temp;                 // Delete the node
        }
        // Case 3: Node has two children
        else 
        {
          Node *newNode = _findMin(sub_root->right);      // Find the smallest node in the right subtree
          sub_root->data = newNode->data;                 // Replace the node's data with the smallest value
          deleteNode(sub_root->right, newNode->data);     // Delete the smallest node in the right subtree
        }

    }


    }
     
  

public:
  Bst() { root = nullptr; }
  void insert(int x) {
    _insert(root, x);
  }

  bool search() { return 0; }

  // Setter for the deleteNode function
  // Public function to delete a node from the BST
  void deleteN(int x) {
    deleteNode(root, x);
  
  }

  void print() { _print(root); }
};

int main() {
  //std::cout << "Hello World!\n";
  cout << "Victoria Heredia" << endl << "A03 - Assignment 3: BST Delete" << endl;
 
  Bst tree;

  tree.insert(8);
  tree.insert(3);
  tree.insert(1);
  tree.insert(11);
  tree.insert(7);
  tree.insert(15);

  // Print the tree before deletion
  cout << endl <<"Tree before deletion: "  << endl;
  tree.print();

  cout << endl;

  // Case 1: Deleting leaf nodes (no children)
  cout << endl << "1. Case 1: Leaf Nodes (Has NO children)" << endl << "Numbers that are leaf nodes: [1], [7], [15]";
  tree.deleteN(1); // Delete a node with no children
  cout << endl << "- Tree after deleting 1: "  << endl;
  tree.print();
  tree.deleteN(7); // Delete a node with no children
  cout << endl << "- Tree after deleting 7: "  << endl;
  tree.print();
  tree.deleteN(15); // Delete a node with no children
  cout << endl << "- Tree after deleting 15: "  << endl;
  tree.print();

  cout << endl;

  // Create a new tree for Case 2
  Bst tree1;
  tree1.insert(8);
  tree1.insert(3);
  tree1.insert(1);
  tree1.insert(11);
  tree1.insert(7);
  tree1.insert(15);

  // Case 2: Deleting a node with one child
  cout << endl << "2. Case 2: Node has ONE child in either side (left or right)" << endl << "Number that has ONE child: [11]";
  tree1.deleteN(11); // Delete a node with one child
  cout << endl << "- Tree after deleting 11: "  << endl;
  tree1.print();

  cout << endl;

  // Create a new tree for Case 3
  Bst tree2;
  tree2.insert(8);
  tree2.insert(3);
  tree2.insert(1);
  tree2.insert(11);
  tree2.insert(7);
  tree2.insert(15);

  // Case 3: Deleting a node with two children
  cout << endl << "3. Case 3: Node has TWO children (left and right)" << endl << "Number that has TWO children: [3]";
  tree2.deleteN(3); // Delete a node with two children
  cout << endl << "- Tree after deleting 3: "  << endl;
  tree2.print();
  cout << endl;

  return 0;
}