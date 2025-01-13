#include "Node.h"
#include <iostream>
using namespace std;
class BST {
protected:
	Node* root;
public: 
	BST();
	virtual void insertion(int) = 0;
	
	
};
BST::BST() {
	root = nullptr;
}