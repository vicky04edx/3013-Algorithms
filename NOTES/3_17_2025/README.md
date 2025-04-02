# NOTES: 3/17/2025

## Huffman Codes

- Provides a unique way of using Binary Tree to "compress" data.
- Each letter gets a binary code
- There exist 2 types of compression: lossy and loss-less compression 

## Huffman Trees
1. Sort the drequencies into increasing order
2. Then choose the two smallest values and construct a labeled binary tree
3. Next replace the two smallest values with their sum and we get a new sequence
4. Repeat

This code is called a prefix encoding. Th bit string encoding of values is unique due to every letter being stored in only leaf nodes, this is how we know when to stop whwn given a particular string. 

