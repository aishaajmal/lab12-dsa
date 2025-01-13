#include "BST.h"
#include <iostream>
using namespace std;

class myBst : public BST {
private:
    void inOrder(Node*);
    Node* insertRecursively(Node* root, int value);

public:
    void insertion(int);
    void inorder();
};

Node* myBst::insertRecursively(Node* root, int value) {
    if (root == nullptr) {
        Node* nn = new Node;
        nn->bookID = value;
        nn->leftChlid = nullptr;
        nn->rightChild = nullptr;
        return nn;
    }
    if (value < root->bookID) {
        root->leftChlid = insertRecursively(root->leftChlid, value);
    }
    else if (value > root->bookID) {
        root->rightChild = insertRecursively(root->rightChild, value);
    }
    return root;
}

void myBst::insertion(int value) {
    root = insertRecursively(root, value);
}

void myBst::inOrder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inOrder(node->leftChlid);
    cout << node->bookID << " ";
    inOrder(node->rightChild);
}

void myBst::inorder() {
    cout << "In-Order Traversal of the BST: ";
    inOrder(BST::root);
    cout << endl;
}
