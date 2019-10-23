#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


// Complete Binary Tree - ADT
// Array/Vector-based implementation
class BinaryTree {
    // vector to store data for binary tree of char types
    private: vector<char> bt;
    // meta data
    // root is the root index which is always as index 0 for non-empty tree
    private: int root, size, max_size;
    
    // does the actual inorder traversal
    private: void inorder(int root) {
        if (root >= this->bt.size() || this->bt[root] == '\0') // base case
            return;
        // inorder left-subtree
        inorder(2*root+1);
        // visit the node
        cout << this->bt[root] << " ";
        // inorder right-subtree
        inorder(2*root+2);
    }
    
    private:
        // converts tree to its mirror
        void mirror(int node) {
            if (this->bt[node] == '\0')
                return;

            int left = 2 * node + 1;
            int right = 2 * node + 2;
            mirror(left); // mirror left substree
            mirror(right); // mirror right subtree
            // swap the left/right nodes
            swap(this->bt[left], this->bt[right]);
        }
        
        // check if Tree is Full
        bool isFull() {
            return this->size == this->max_size;
        }
    
    // constructor
    public: BinaryTree(int max_size) {
        this->root = 0;
        this->size = 0;
        this->bt.resize(max_size);
        this->max_size = max_size;
        // initialize bt with \0 null character
        fill(this->bt.begin(), this->bt.end(), '\0');
    }
    
    public: 
        // get the actual size of Binary Tree
        int getSize() { return this->size; }
        // get the max size of Binary Tree
        int getMaxSize() { return this->max_size; }
        
        //updates or adds root node 
        void updateRoot(char data) {
            if (bt[this->root] == '\0')
                this->size++;
            this->bt[this->root] = data;
        }

        // insert a node; left to right level by level
        void insertNode(char data) { 
            if (isFull()) {
                cout << "Debug: Binary Tree is Full!" << endl;
                return;
            }
            this->bt[size++] = data;
        }

        // insert or update left child of given parent with data
        void updateLeftChild(int parent, char data) {
            int leftChild = 2 * parent + 1;
            if (leftChild >= this->max_size)
                cout << "Debug: Binary Tree out of bounds!" << endl;
            else if (this->bt[parent] == '\0')
                cout << "Debug: parent at index " << parent << " does NOT exist!";
            else {
                if (bt[leftChild] == '\0')
                    size++; // add a new child
                this->bt[leftChild] = data;
            }
        }

        // insert or update right child of given parent with data
        void updateRightChild(int parent, char data) {
            int rightChild = 2 * parent + 2;
            if (rightChild >= this->max_size)
                cout << "Debug: Binary Tree out of bounds!" << endl;
            else if (this->bt[parent] == '\0')
                cout << "Debug: Parent at index " << parent << " does NOT exist!";
            else {
                if (bt[rightChild] == '\0')
                    size++;
                this->bt[rightChild] = data;
            }
        }
    
        // print all nodes level by level
        void print() const {
            for(auto ch: this->bt)
                if (ch == '\0') cout << "- ";
                else cout << ch << " ";
            cout << endl;
        }

        // public inorder method traversal
        void inorder() {
            this->inorder(0); // calls private inorder method
        }
    
       // FIXME: Write public preorder traversal method
       // FIXME: Write public postorder traversal method
    
       /* mirror tree:
         Changes the tree into its mirror image.
         So the tree...
             4
            / \
           2   5
          / \
         1   3
         is changed to...
             4
            / \
           5   2
          / \
         3   1
         Uses a recursive helper that recurs over the tree,
         swapping the left/right pointers.
        */
        void mirror() {
             this->mirror(this->root); // call private mirror
        }
};