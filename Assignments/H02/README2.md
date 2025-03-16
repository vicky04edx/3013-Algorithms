### Part B: Simulation and Diagram Exercises
#### Exercise 1: Open Hashing (Separate Chaining)
Given the following set of keys:

    5,22,17,18,35,101,16,0,8

Task:

Assume a hash table size of 10. Use the division method hash function: h(k)= k mod 10
- Insert the keys in the given order using separate chaining (each table slot holds a linked list of entries).
- Draw a diagram showing the hash table buckets and the contents of each bucket after all insertions.
- Identify any buckets with collisions and note how many elements are stored in each.

    - In this hash table using separate chaining, collisions are handled by storing multiple elements in the same bucket.

        - Buckets with Collisions:
            
            Bucket 5 (Collision Detected)
            
            Stores: 5, 35

            Collision occurs because both 5 mod 10 = 5 and 35 mod 10 = 5.


        - Bucket 8 (Collision Detected)
        
            Stores: 18, 8
            
            Collision occurs because both 18 mod 10 = 8 and 8 mod 10 = 8.

<img src=Hash_Table_SeparateChaining.png width=600>

#### Exercise 2: Closed Hashing (Open Addressing)
Using the same set of keys:

    5,22,17,18,35,101,16,0,8

Task: 

Assume a hash table size of 10. Use the division method hash function: h(k)= k mod 10
- Insert the keys in the given order using linear probing for collision resolution.
- Draw a diagram of the hash table showing the index positions and the key stored at each index.
- Discuss any clustering effects you observe.

    - In this hash table using linear probing, we can observe primary clustering, where consecutive slots become occupied, making future insertions more likely to probe further.
    - Cluster at Index 5-9:
    The values 5, 35, 17, 18, and 16 form a long cluster from index 5 to 9.
    
    - High Probing for Certain Values:

        16 mod 10 = 6 → 4 probes needed before finding an empty spot at index 9.

        8 mod 10 = 8 → 6 probes needed before being placed at index 3 due to the occupied slots ahead.

<img src=Hash_Table_LinearProbing.png width=600>

#### Exercise 3: Impact of Poor Table Sizes
Task: 

Consider the set of keys:

    5, 10, 15, 20, 25, 30, 35, 40

- Simulate insertion using the division method with a table size of 10 and then with a table size of 11 (a prime number). 
- For each scenario, draw the resulting hash table (choose either open or closed addressing for consistency).
- Compare the distribution of keys and discuss which table size appears to offer a more uniform distribution and why.

    - Table Size 10 (Left)

        - Uses h(k) = k mod 10.
        
        - Significant clustering and collisions occur due to multiple values hashing to the same index.Example: 20, 30, and 40 all hash to index 0, requiring multiple probes.
        
        - Similarly, 5, 15, 25, and 35 hash to index 5, creating a long cluster.
        
        - Linear probing causes primary clustering, worsening probe lengths and efficiency.

    -  Table Size 11 (Right)
    
        - Uses h(k) = k mod 11.
        
        - More even distribution with no collisions.
        
        - Each key maps to a unique index, avoiding unnecessary probes.
        
        - The prime number 11 helps prevent clustering by better distributing values.


    - In conclusion, the table with size 11 offers a significantly more uniform distribution compared to the table of size 10. Using a prime number as the table size helps reduce clustering and improves efficiency in linear probing.

<img src=Hash_Table_LinearProbing2.png width=1000>