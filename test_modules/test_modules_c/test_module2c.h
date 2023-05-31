#ifndef TEST_MODULE2C_H
#define TEST_MODULE2C_H

class BST {
    int data;
    BST *left, *right;
 
public:
    // Default constructor.
    BST();
 
    // Parameterized constructor.
    BST(int);
 
    // Insert function.
    BST* Insert(BST*, int);
 
    // Inorder traversal.
    void Inorder(BST*);
};

#endif //TEST_MODULE2C_H