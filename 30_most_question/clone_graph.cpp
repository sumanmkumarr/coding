// unordered_map and map is just like dictionary, it store key value pair
// in unordered_map - it store the key in the random order, it uses hash table
// in map - it store the key in the ascending order by default, it uses balanced binary search tree (red-black tree)


// unordered_set and set are used to store unique value
// in unordered_set - it store unique value in random order, it uses hash table
// in set - it store unique value in the ascending order by default, it uses balanced binary search tree (red-black tree)


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
    
// }



#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// -------------------------
// Definition of the graph node
// -------------------------
class Node {
public:
    int val;                     // Value of the node (like city number)
    vector<Node*> neighbors;     // List of connected nodes (roads)

    // Default constructor (when no value given)
    Node() { val = 0; }

    // Constructor with value
    Node(int _val) { val = _val; }

    // Constructor with value and neighbor list
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

// -------------------------
// Solution class that clones the graph
// -------------------------
class Solution {
public:
    // Map to store: original node -> cloned node
    // We use unordered_map because we only care about quick lookup, not sorted order
    unordered_map<Node*, Node*> mp;

    // Function to clone the graph starting from given node
    Node* cloneGraph(Node* node) {
        // Base case: If starting node is NULL, return NULL
        if (!node) return NULL;

        // If we have already cloned this node, return its copy
        if (mp.find(node) != mp.end()) {
            return mp[node];
        }

        // Step 1: Create a new node with the same value as original node
        Node* copy = new Node(node->val);

        // Step 2: Store the mapping in our notebook (mp)
        mp[node] = copy;

        // Step 3: Clone all the neighbors
        for (auto neighbor : node->neighbors) {
            // Recursively clone each neighbor and add it to copy's neighbor list
            copy->neighbors.push_back(cloneGraph(neighbor));
        }

        // Step 4: Return the cloned node
        return copy;
    }
};

// -------------------------
// Helper function to print the graph (for testing)
// -------------------------
void printGraph(Node* node, unordered_set<Node*>& visited) {
    if (!node || visited.count(node)) return; // Avoid printing same node twice
    visited.insert(node);

    cout << "Node " << node->val << " connected to: ";
    for (auto n : node->neighbors) {
        cout << n->val << " ";
    }
    cout << endl;

    for (auto n : node->neighbors) {
        printGraph(n, visited);
    }
}

// -------------------------
// Main function
// -------------------------
int main() {
    // Create a small example graph:
    // 1 -- 2
    // |    |
    // 4 -- 3

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    // Add neighbors for each node
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};

    // Print original graph
    cout << "Original Graph:\n";
    unordered_set<Node*> visited1;
    printGraph(n1, visited1);

    // Clone the graph
    Solution sol;
    Node* cloned = sol.cloneGraph(n1);

    // Print cloned graph
    cout << "\nCloned Graph:\n";
    unordered_set<Node*> visited2;
    printGraph(cloned, visited2);

    return 0;
}
