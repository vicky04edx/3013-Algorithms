# NOTES: 3/3/2025

## Hashing refresher
- To avoid bad clustering, we genrally want a table to be 20% bigger than the data set
- CHaining is common collision resolution
- Table sizes should be prime

### Quadratic Probing:
- H = v % m + i^2

- i = How many times we are looking for something
- m = table size
- v = value of what we are searching for

- When there is acollision,increment 1 
## Graphing Algorithms

- A graph is a set of vertices and a set of edges that connect pairs of distinct vertices
- vertex = node, edge = link
- Simple graphs have a property about the maximum number of edges, a graph with V vertices has at most: V(V-1)/2 edges
- isomorphic: 2 graphs are isomorphic if you can relabel the vertices and make the set of edges in each graph identical. 
- Path: in a graph it is a set of vertices in which each successive vertex (after the first) is adjacent to its predecessor in the path
- Simple Path: vertices and edges are distinct
- Cycle: Simple path in which the first and last vertices are the same

### Dijkstras Algprithm:
- Algorithm that solves the single-source shortest path problem for a directed graph with nonnegative edge weights,