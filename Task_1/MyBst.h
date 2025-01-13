#include "BST.h"
#include <iostream>
using namespace std;

class myBst : public BST {
private:
    void inOrder(Node*);  

public:
    void insertion(int);   
    void inorder();        
       
    
};

void myBst::insertion(int value) {
    Node* nn = new Node;
    nn->bookID = value;
    nn->leftChlid = nullptr;
    nn->rightChild = nullptr;

    if (root == nullptr) {
        root = nn;
        return;
    }

    Node* temp = root;
    Node* parent = nullptr;

    while (temp != nullptr) {
        parent = temp;
        if (value < temp->bookID) {
            temp = temp->leftChlid;
        }
        else {
            temp = temp->rightChild;
        }
    }

    if (value < parent->bookID) {
        parent->leftChlid = nn;
    }
    else {
        parent->rightChild = nn;
    }
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




