#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
 
// Data structure to store a Binary Tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Function to check if given node is a leaf node or not
bool isLeaf(Node* node)
{
    return (node->left == nullptr && node->right == nullptr);
}
 
// Recursive function to find all nodes at given distance from leaf nodes
void leafNodeDistance(Node* node, vector<Node*> path,
                    unordered_set<Node*> &set, int dist)
{
    // base case: empty tree
    if (node == nullptr)
        return;
 
    // if a leaf node is found, insert the node at distance 'dist' from
    // leaf node into the set
    if (isLeaf(node) && path.size() >= dist)
    {
        set.insert(path.at(path.size() - dist));
        return;
    }
 
    // include current node into current path
    path.push_back(node);
 
    // recur for left and right subtree
    leafNodeDistance(node->left, path, set, dist);
    leafNodeDistance(node->right, path, set, dist);
}
 
// find all distinct nodes at given distance from leaf nodes
void leafNodeDistance(Node* node, int dist)
{
    // vector to store root to leaf path
    vector<Node*> path;
 
    // create an empty set to store distinct nodes at given
    // distance from leaf nodes
    unordered_set<Node*> set;
 
    // find all nodes
    leafNodeDistance(node, path, set, dist);
 
    // print output
    for (Node* node: set)
        cout << node->data << " ";
}
 
int main()
{
    Node* root = nullptr;
 
    /* Construct below tree
              15
            /    \
           /      \
          10       20
         / \      /  \
        8   12   16  25
                /
               18
    */
 
    root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->left->left = new Node(18);
 
    int dist = 1;
    leafNodeDistance(root, dist);
 
    return 0;
}