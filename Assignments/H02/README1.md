## Part A: Conceptual Questions
### Define Hashing and Collision Resolution
#### 1. What is a hash table and why is collision resolution necessary?

A hash table is a type of data structure (array) where keys (the numbers or data) map to array positions using a hash function. This function takes an input ‘x’ and converts it into an integer value ‘i’, which serves as an array index or key. The returned integer value can be adjusted to fit an array by using modulus (H(x)= i % array_size). Collision resolution is helpful when we need to handle situations where multiple keys map to same index. By using collision resolution, we can store and retrieve data efficiently by finding other places to keep data when a collision occurs.

#### 2. Explain the key differences between open hashing (chaining) and closed hashing (open addressing).

Open hashing manages collisions outside of the hash table by using another data structure (linked lists), to store key-value pairs. This means that multiple values can be stored in the same bucket. In contrast, closed hashing addresses collisions inside the hash table itself. When a collision occurs, the new value is placed in the next available spot, which means that each bucket can only contain one value. Open hashing requires additional memory for pointers and linked lists, while closed hashing only uses the memory necessary for the table itself.

### Collision Resolution Techniques

#### 3. Briefly describe at least two methods for resolving collisions in open addressing (e.g., linear probing, quadratic probing, double hashing).
#### 4. Explain the pros and cons of each method.
 
 Linear Probing: When a collision occurs at hash address h(k), it probes subsequent slots linearly: h(k)+1, h(k)+2, h(k)+3, and so on,
-	Pros: Simple to implement and low computational overhead for each probe.
-	Cons: Primary clustering which is a tendency for consecutive slots to become occupied, leading to long probe sequences and degraded performance. This happens because if a collision happens, the next available slot will be used, increasing the probability of another collision happening at the next slot.

Quadratic Probing: When a collision occurs at h(k), it probes slots with quadratic increments: h(k)+1^2, h(k)+2^2, h(k)+3^2, and so on.
-	Pros: Reduces primary clustering compared to linear probing and distributes probes more evenly.
-	Cons: Secondary clustering occurs when two keys have the same initial hash value, they will follow the same probe sequence. It also requires that the table size m be a prime number to ensure the probe sequence visits many locations. If the table becomes too full, it might not find an empty slot.

Double Hashing: It uses two hash functions to create two different hash values for a key. The first hash function calculates the initial hash value, and the second one determines the step size for the probing sequence.
-	Pros: Effectively eliminates both primary and secondary clustering and provides a more uniform distribution of probes.
-	Cons: Requires computing a second hash function, which adds computational overhead. Choosing appropriate hash functions is essential for optimal performance. Poorly designed hash functions can lead to inefficiencies.

#### 5. Which collision resolution technique can handle more values than table slots. Explain.

Open Hashing (Chaining) can handle more values than the number of slots in the hash table because, even if a slot is occupied, multiple values can be stored in the same bucket using a linked list (or another data structure like a binary search tree). This allows the table to store more elements than its initial size, as each bucket can grow dynamically to accommodate additional values.

#### 6. What is the worst performance (big oh) for each type of collision resolution technique? 

Open hashing has a worst-case time complexity of O(n). This means that if many keys hash to the same location, they create a long linked list. In this situation, you must go through the entire list to search, insert, or delete an element. Closed hashing also has a worst-case time complexity of O(n). This occurs when several collisions happen, forcing you to check nearly all the table slots before finding an empty spot for insertion or the element you want to search for. Even though both methods can take O(n) time in the worst case, open hashing is usually more efficient when there are fewer items to store. The linked lists in open hashing allow for easier insertions and deletions. In contrast, closed hashing becomes less efficient as the table fills up, making it harder to resolve collisions.

### Impact of Hash Table Size
#### 7. How does the choice of table size affect the distribution of keys?

The size of a table affects how well keys are spread out. Choosing the right size helps reduce collisions and makes lookups, insertions, and deletions faster. It's best to use a prime number for the table size since this helps distribute keys evenly. If the table size is not suitable, it can lead to clustering, which increases collisions and slows down processes.

#### 8. What are the pitfalls of using a poor table size (for example, a table size that is a round number or a power of 2)?

Some of the pitfalls of using poor table size are that it can increase collisions, can cause poor distribution in division hashing, and Issues with Power of 2 Table Sizes. Power-of-2 table sizes are particularly problematic because they cause the hash function to rely only on the lower bits of keys, leading to clustering. Choosing a prime number for the table size helps distribute keys more evenly and reduces the likelihood of collisions.

#### Sources: 