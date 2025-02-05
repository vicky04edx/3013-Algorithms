// # include <iostream>
// using namespace std;

// bool in_array(int *a,int x, int index)
// {
//     for (int i=0; i<=index; i++)
//     {
//         if(a[i]==x)
//         {
//             return true;
//         }
      
//     }
//       return false;
// }

// bool print()
// {
//     for (int j=0; j<=size; j++)
//     {
//         cout << a[size] << " ";
//         if (i+1%15)
//     }
// }

// int binary_search(int *a, int key, int size)
// {
//     int f = 0;
//     int r = size - 1;
//     int m (f + r)/2;
//     bool found = false;
//     while(!found)
//     {
//         if(f==r==m)
//         {
//             return -1;
//         }
//         if (a[f] == key)
//         {
//             return f;
//         }
//          if (a[m] == key)
//         {
//             return r;
//         }
//          if (a[r] == key)
//         {
//             return r;
//         }
//          if (key >a[m])
//         {
//             f= m+1;

//         }
//         else
//         {
//             r = m + 1; 
//         }
//         m = (f+r)/2
//     }
// }
// void swap (int *a, int i, int j)
// {

//     int temp = a[i];
// }
// int main()
// {
//     int size = 100;
//     int *nums = new int[size];
//     bool unique;
//     int r;

//     for (int i=0; i<size; i++)
//     {
       
//         r = rand()%10000;
//         while(in_array(nums, r, i))
//         {

//             r = rand()%10000;
//         }

//         nums[i] = r;
//     }
//     print(nums, size);
//     cout << endl;
//     bubble_sort(nums,size);
//     print(nums, size);
// }

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = right = nullptr;
  }
};

// Same as above, just uses init lists.
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) : value(val), left(nullptr), right(nullptr) {}
// };

class GraphvizBST {
public:
  static void saveDotFile(const std::string &filename,
                          const std::string &dotContent) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
      outFile << dotContent;
      outFile.close();
      std::cout << "DOT file saved: " << filename << std::endl;
    } else {
      std::cerr << "Error: Could not open file " << filename << std::endl;
    }
  }

  static std::string generateDot(const Node *root) {
    std::string dot = "digraph BST {\n";
    dot += "    node [fontname=\"Arial\"];\n";
    dot += generateDotHelper(root);
    dot += "}\n";
    return dot;
  }

private:
  static std::string generateDotHelper(const Node *node) {
    if (!node)
      return "";
    std::string result;
    if (node->left) {
      result += "    " + std::to_string(node->data) + " -> " +
                std::to_string(node->left->data) + " [label=\"L\"];\n";
      result += generateDotHelper(node->left);
    } else {
      std::string nullNode = "nullL" + std::to_string(node->data);
      result += "    " + nullNode + " [shape=point];\n";
      result += "    " + std::to_string(node->data) + " -> " + nullNode + ";\n";
    }
    if (node->right) {
      result += "    " + std::to_string(node->data) + " -> " +
                std::to_string(node->right->data) + " [label=\"R\"];\n";
      result += generateDotHelper(node->right);
    } else {
      std::string nullNode = "nullR" + std::to_string(node->data);
      result += "    " + nullNode + " [shape=point];\n";
      result += "    " + std::to_string(node->data) + " -> " + nullNode + ";\n";
    }
    return result;
  }
};

class Bst {
private:
  Node *root;
  void _insert(Node *&sub_root, int x) {
    if (sub_root == nullptr) {
      sub_root = new Node(x);
    } else {
      // go left if less
      if (x < sub_root->data) {
        _insert(sub_root->left, x);
      } else {
        // go right if greater
        _insert(sub_root->right, x);
      }
    }
  }
  void _print(Node *root) {
    if (!root) {
      return;
    }

    _print(root->right);
    cout << root->data << " ";
    _print(root->left);
  }
  friend GraphvizBST;

public:
  Bst() { root = nullptr; }
  void insert(int x) { _insert(root, x); }
  bool search() { return 0; }
  void print() { _print(root); }
  string dotPrint() {
    cout << "Cut and past the dot code below "
            "at:\nhttps://dreampuf.github.io/GraphvizOnline \n\n";
    return GraphvizBST::generateDot(root);
  }
};

int main() {
  std::cout << "Hello World!\n";
  Bst tree;
  tree.insert(8);
  tree.insert(3);
  tree.insert(1);
  tree.insert(11);
  tree.insert(7);
  tree.insert(15);
  // for(int i=0;i<1000;i++){
  //    tree.insert(rand()%1000);
  // }
  tree.print();
  cout << endl << tree.dotPrint() << endl;
}