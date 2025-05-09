## H01 - AVL Tree Graphs
### Victoria Heredia
### Description:


### Files

|   #   | File             | Description                                        |
| :---: | ---------------- | -------------------------------------------------- |
|   1   | [SET 1: Graph](./AVL_TREE_SET1.png) | AVL tree SET 1 Graph            |
|   2   | [SET 2: Graph](./AVL_TREE_SET2.png) | AVL tree SET 2 Graph            |


### SET 1:
In this first set, we will insert the values `10, 20, 30, 15, 25, 5, 35, 27` sequentially into an AVL Tree and perform rotations when necessary to maintain balance. We will identify where single rotations (LL or RR) and double rotations (LR or RL) occur.

### Step-by-Step Insertion and Balancing SET 1
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

### SET 2:
In this second set, we will insert the values `50, 40, 45, 60, 55, 70, 35, 30, 65, 75, 43` sequentially into an AVL Tree and perform rotations when necessary to maintain balance. We will identify where single rotations (LL or RR) and double rotations (LR or RL) occur.


### Step-by-Step Insertion and Balancing SET 2
Insert 50
1. Insert 40 → B.F. of 50 = +1 (Left-heavy) → No rotation needed
2. Insert 45 → B.F. of 50 = +2, B.F. of 40 = –1 → LR Rotation (Left-Right case) first left rotation on 40 with 45
3. Right rotation with 50 and 45 
4. LR Rotation completed → B.F. of 45, 40, 50 = 0 → Top node is now 45
5. Insert 60 → No rotation needed
6. Insert 55 → B.F. of 50 = -2 → RL Rotation (Right-Left case) first right rotation on 60 with 55
7. Right rotation with 50 and 55 
8. RL Rotation completed → B.F. of 40, 55, 50, 60 = 0 → B.F. of 45 = -1
9. Insert 70 → BF of 45 = -2 → Left rotation needed on 45 with 55
10. Left rotation completed → B.F. of 40, 45, 50, 70 = 0 → B.F. of 60 = -1 → B.F. of 55 = 0
11. Insert 35 → No rotation needed
12. Insert 30 → B.F. of 40 = +2 → Right rotation needed on 40 with 35
13. Right rotation completed → B.F. of 40, 35, 30, 50 = 0 → B.F. of 45, 70, 55 = 1  → B.F. of 60 = -1
14. Insert 65 → BF of 60 = –2 → RL Rotation at (Right-Left case) → Right rotation on 70 with 65
15. Left rotation on 65 with 60
16. RL Rotation completed → B.F. of 45, 50, 35, 30, 40, 65, 60, 70 = 0 → B.F. of 55 = 1 
17. Insert 75 → No rotation needed
18. Insert 43 → B.F. of 45 = 2 → LR Rotation needed (Left-Right case), left rotation at 35 with 40
19. Right rotation at 45 with 45 → B.F. of 45, 50, 35, 30, 40, 65, 60, 70 = 0 → B.F. of 55 = 1 
20. Left-Right rotation completed → B.F. of 55, 40, 65, 35, 4, 65, 60, 70 = 0 → B.F. of 35 = 1 → B.F. of 65, 70 = -1 


<img src=AVL_TREE_SET2.png width=300>

### Conclusion
This insertion sequence required:

- The AVL Tree remains balanced, ensuring O(log n) height for efficient search operations.