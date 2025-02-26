# NOTES: 1/26/2025

## Hashing

- It means to simply pass some data through a formula (or function) that produces a result calles a `hash`
- The `hash` is avalue used to respresent the data in some manner (like small string it an integer)
- TWO TYPES OF HASSHING:
    - 1 way hassinh
    - Hash tables (focus, constant time lookup)
### Cryptographic: 1 way hash 
- Used for authentication, digital signatures, fingerprint, etc
- 1 way hashing is not a has table
### Hash Table:
- Data structure that strives to be aconstant time lookup table
- In many languages, they are built in, given us an array or a struct in c++, called dictionaries in python, Php associative arrays, maps in c++
- Collision resolution: Open Addressing and chaining
#### Open Addressing:
- Places the hashes calue in the hash table
- If the slot is open, it goes there, if not it finds a plae IN the hash table
- Three methods:
    - Linear probing
    - Quadratic probing
    - Double hasshing
    - Pseudo Random Probing
### Chaining:
- Places the hashes value in a list POINTED to by the hash table
- If no list exists, it creates one
- If one does exist, it adss it to the end.
-Separate chaining and Direct chaining

#### Clustering:
- The tendency for entries in a hash table which uses open addressing to be stores together (in close proximity), even when the table has ample empty space to spread them out
- Primary clustering and secondary clustering
