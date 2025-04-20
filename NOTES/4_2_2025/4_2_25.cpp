//CODE FROM  @rugbyprof Replit: 4883_bipartite_graphs


#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define V 5

using namespace std;

// This function returns true if graph
// G[V][V] is Bipartite, else false

bool isBipartite(int G[][V], int src) {

  // Create a color array to store colors assigned to all vertices.
  // Vertex number is used as index in this array.
  // The value '-1' of colorArr[i] is used to indicate that no color is assigned
  // to vertex 'i'. The value 1 is used to indicate first color is assigned and
  // value 0 indicates second color is assigned.

  int colorArr[V];
  for (int i = 0; i < V; ++i)
    colorArr[i] = -1;

  // Assign first color to source
  colorArr[src] = 1;

  // Create a queue (FIFO) of vertex
  // numbers and enqueue source vertex
  // for BFS traversal
  queue<int> q;
  q.push(src);

  // Run while there are vertices
  // in queue (Similar to BFS)
  while (!q.empty()) {
    // Dequeue a vertex from queue
    int u = q.front();
    q.pop();

    // Return false if there is a self-loop
    if (G[u][u] == 1)
      return false;

    // Find all non-colored adjacent vertices
    for (int v = 0; v < V; ++v) {
      // An edge from u to v exists and
      // destination v is not colored
      if (G[u][v] && colorArr[v] == -1) {
        // Assign alternate color to this adjacent v of u
        colorArr[v] = 1 - colorArr[u];
        q.push(v);
      }

      // An edge from u to v exists and destination
      // v is colored with same color as u
      else if (G[u][v] && colorArr[v] == colorArr[u])
        return false;
    }
  }

  // If we reach here, then all adjacent
  // vertices can be colored with alternate color
  return true;
}

// int getNextComponent(vector<int> &processed) {
//   auto it = std::find(processed.begin(), processed.end(), processed);

//   // Check if the element was found
//   if (it != processed.end()) {
//     return std::distance(processed.begin(), it);
//   }
//   return -1;
// }


// Program to test above function
int main() {
  int G[][V] = {{0, 1, 1, 0, 0}, 
                {1, 0, 0, 1, 0}, 
                {1, 0, 0, 1, 0}, 
                {0, 0, 0, 1, 0}};


  isBipartite(G, 0) ? cout << "Yes, the graph is Bipartite"
                    : cout << "No, the graph is not Bipartite";
  return 0;
}