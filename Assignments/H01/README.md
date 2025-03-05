## H01 - AVL Tree Graphs
### Victoria Heredia
### Description:
In this set, we will insert the values 10, 20, 30, 15, 25, 5, 35, 27 sequentially into an AVL Tree and perform rotations when necessary to maintain balance. We will identify where single rotations (LL or RR) and double rotations (LR or RL) occur.



### Files

|   #   | File             | Description                                        |
| :---: | ---------------- | -------------------------------------------------- |
|   1   | [SET 1: Graph](./AVL_TREE_SET1.png) | AVL tree SET 1 Graph            |


### Step-by-Step Insertion and Balancing
1. Insert 10
2. Insert 20, balance Factor of 10 = -1 (Right-heavy) → *No rotation needed*
3. Insert 30, balance Factor of 10 = -2 (Right-heavy), Balance Factor of 20 = -1 (Right-heavy), RR Rotation needed at 10 (Right-Right Case)/ Left Rotation on 10
4. Insert 15, balance Factor of 20 = 1 (Left-heavy) → *No rotation needed*
5. Insert 25, balance Factor of 30 = 1 (Left-heavy) → *No rotation needed*
6. Insert 5, balance Factor of 10 = 1 (Left-heavy) → *No rotation needed*
7. Insert 35, balance Factor of 30 = 0 → *No rotation needed*
8. Insert 27, balance Factor of 30 = 1 (Left-heavy) → *No rotation needed*

<img src=AVL_TREE_SET1.png width=300>

### Conclusion
This insertion sequence required:

- One single right rotation (RR) at 10 to correct a Right-Right imbalance.

- The AVL Tree remains balanced, ensuring O(log n) height for efficient search operations.