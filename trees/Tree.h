//
// Created by Navin Tamilchelvam on 8/30/20.
//

#ifndef LEETCODES_TREE_H
#define LEETCODES_TREE_H

#include "Node.h"
#include "Queue.h"
#include <queue>
#include <iostream>
using namespace std;

class Tree{

private:
    Node *root;

public:
    Tree();
    ~Tree();
    void CreateTree();
    void Preorder(){ Preorder(root); }  // Passing Private Parameter in Constructor
    void Preorder(Node* p);
    void Postorder(){ Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(Node* p);
    void Inorder(){ Inorder(root); }
    void Inorder(Node* p);
    void Levelorder(){ Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(Node* p);
    int Height(){ return Height(root); }  // Passing Private Parameter in Constructor
    int Height(Node* p);
    Node* getRoot(){ return root; }
};






#endif //LEETCODES_TREE_H
