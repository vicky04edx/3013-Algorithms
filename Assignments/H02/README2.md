### Part B: Simulation and Diagram Exercises
#### Exercise 1: Open Hashing (Separate Chaining)
Given the following set of keys:

    5,22,17,18,35,101,16,0,8

Task:

Assume a hash table size of 10. Use the division method hash function: h(k)= k mod 10
- Insert the keys in the given order using separate chaining (each table slot holds a linked list of entries).
- Draw a diagram showing the hash table buckets and the contents of each bucket after all insertions.
- Identify any buckets with collisions and note how many elements are stored in each.

<img src=Hash_Table_SeparateChaining.png width=600>

#### Exercise 2: Closed Hashing (Open Addressing)
Using the same set of keys:

    5,22,17,18,35,101,16,0,8

Task: 

Assume a hash table size of 10. Use the division method hash function: h(k)= k mod 10
- Insert the keys in the given order using linear probing for collision resolution.
- Draw a diagram of the hash table showing the index positions and the key stored at each index.
- Discuss any clustering effects you observe.

<img src=Hash_Table_LinearProbing.png width=600>

#### Exercise 3: Impact of Poor Table Sizes
Task: 

Consider the set of keys:

    5, 10, 15, 20, 25, 30, 35, 40

- Simulate insertion using the division method with a table size of 10 and then with a table size of 11 (a prime number). 
- For each scenario, draw the resulting hash table (choose either open or closed addressing for consistency).
- Compare the distribution of keys and discuss which table size appears to offer a more uniform distribution and why.

<img src=Hash_Table_LinearProbing2.png width=1000>