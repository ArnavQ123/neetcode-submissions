#include <unordered_map>
#include <vector>
using namespace std;

// Definition for a Node.

class Solution {
public:
    unordered_map<Node*, Node*> copies;
    
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        
        // If the node is already copied, return the copy
        if (copies.find(node) != copies.end()) {
            return copies[node];
        }
        
        // Create a new node copy
        Node* clonedNode = new Node(node->val);
        copies[node] = clonedNode;
        
        // Clone neighbors recursively
        for (Node* neighbor : node->neighbors) {
            clonedNode->neighbors.push_back(cloneGraph(neighbor));
        }
        
        return clonedNode;
    }
};

