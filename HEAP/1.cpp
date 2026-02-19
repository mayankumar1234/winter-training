// a heap is complete binary tree which satisfies the heap property
// CBT : all levels are completely filled except possiblt the  last level , 
// the last level is filled from left ot right 
// heap property :1. for max heap : parent node is greater than or equal to its children
    // the largest root is always at root.
// 2. min heap: parent node is always less than or equal to its children 
//      the smallest root is always at root.
// IMPORTANT : heap is not a BST.

// 1 based indexing
// for any node  left child index = 2*i 
// right child index = 2*i + 1
// parent node index = i/2
// 0 based indexing
// for any node  left child index = 2*i + 1     
// right child index = 2*i + 2
// parent node index = (i-1)/2  
  
