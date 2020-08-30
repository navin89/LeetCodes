//
// Created by Navin Tamilchelvam on 8/30/20.
//

#include "Tree.h"

Tree::Tree() {
    root = nullptr;
}

Tree::~Tree() {
    // TODO
}

void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;

    Queue q(25);

    cout << "Enter root value: " << flush;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);

    while (! q.isEmpty()){
        p = q.dequeue();

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p) {
    if (p){
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p) {
    if (p){
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p) {
    if (p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

void Tree::Levelorder(Node *p) {
    Queue q(100);
    cout << root->data << ", " << flush;
    q.enqueue(root);

    while (! q.isEmpty()){
        p = q.dequeue();
        if (p->lchild){
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild){
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(Node *p) {
    int l = 0;
    int r = 0;
    if (p == nullptr){
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);
    if (l > r){
        return l + 1;
    } else {
        return r + 1;
    }
}

