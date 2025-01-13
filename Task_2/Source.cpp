#include "MyBst.h"
int main() {
	myBst bst;
	bst.insertion(50);
	bst.insertion(30);
	bst.insertion(70);
	bst.insertion(60);
	bst.insertion(40);
	// Enter New BookId
	bst.insertion(92);
	bst.inorder();
	return 0;
}