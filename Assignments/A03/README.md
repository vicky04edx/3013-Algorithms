## A03 - BST Delete
### Victoria Heredia
### Description:

This program demonstrates the deletion of nodes from a Binary Search Tree (BST). It handles three cases of node deletion:
1. Deleting a leaf node (no children).
2. Deleting a node with one child.
3. Deleting a node with two children.

The program also includes functions for inserting nodes, printing the tree, and finding the minimum value in a subtree.



### Files

|   #   | File             | Description                                        |
| :---: | ---------------- | -------------------------------------------------- |
|   1   | [main.cpp](./main.cpp) | Main has the function to delete the 3 different cases of BST deletion


### Deletion cases of a Binary Search tree (BST):

#### 1. Leaf Nodes:
- To delete a node that has no children, also called a leaf node, we need to just delete it. In this case the numbers that are leaf nodes are 3, 7 and 15. The `deleteNode` function has an `if` statement. it's parameters check that the node does not have a left child AND that it does not have a right child. Then, inside the `if` statement, use the keyword `delete` to delete the node and set the node to `NULL`. 

#### 2. One child (right or left):
- To delete a node that has ONE child, we need to bypass the node by linking its parent directly to its child. In this case node that has only ONE child is 11. The `deleteNode` fucntion has 2 `else if` statements, one that check if it has a left child and another one that checks if the node has a right child. Both `else if` statements work the same way. Inside both `else if` statements, they include a temporary pointer node that stores the sub root, then the sub root its replaced with its right child, and finally it deletes the temporary node which contained the data from the sub root. 

#### 3. Two children (right and left):
- To delete a node that has TWO children, one in right side and one on the left side, we need to find the smallest node in the right subtree or largest node in the left subtree. In my code I created a function called `_findMinimum` which traverses the leftmost node of a sub root. It also includes a `while loop` that runs as long as there is a left child. Each iteration moves left in the tree, once the sub_root->left child is `NULL`, it means we have reached the leftmost node, which contains the smallest value. Now inside the `deleteNode` fucntion we have an else statement that finds the smallest node in the right subtree, replace the node's data with the smallest value, and delete the smallest node in the right subtree. 