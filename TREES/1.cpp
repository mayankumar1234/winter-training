#include<bits/stdc++.h> 
using namespace std;
// Tree-> It is a non linear,hierarchical data structure consisting of nodes connected by edges
// Binary Tree-> a tree is a binary tree when every node have not more than two children.

// Terminologies--

// 1.leaf-> a node with no children
// 2.internal node -> a node which is not a leaf
// 3.Siblings -> the children of same parent
// 4.Path -> the length of path is one less than the number of nodes on the path.
// 5.Ancestors and Descendents -> if there is a path from node A to Node B, then A is called an ancestor of B and B is called a descendent of A.
// 6.Subtree -> any node of a tree,with all of its descendents is a subtree.
// 7.Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0.

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};