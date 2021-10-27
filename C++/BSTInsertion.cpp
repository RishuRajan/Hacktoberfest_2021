#include <bits/stdc++.h>
using namespace std;

class BST {
	int data;
	BST *left, *right;

public:

	BST();	//default Constuctor

	BST(int);	//Parameterized constructor.

	BST* Insert(BST*, int);	// Insert function.

	void Inorder(BST*);
};

BST :: BST() : data(0), left(NULL), right(NULL) {}

BST :: BST(int val) {
	data = val;
	left = right = NULL;
}

BST* BST :: Insert(BST* root, int val) {
	if (!root)
		return new BST(val);

	if (val > root->data)
		root->right = Insert(root->right, val);
	else
		root->left = Insert(root->left, val);

	return root;
}

void BST :: Inorder(BST* root) {
	if (!root)
		return;
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

int main() {

	BST obj, *root = NULL;
	int n;
	// cout << "Enter the number of nodes: ";
	cin >> n;
	int value;
	// cout << "Enter node value: ";
	cin >> value;
	root = obj.Insert(root, value);
	while (--n) {
		int value;
		// cout << "Enter node value: ";
		cin >> value;
		obj.Insert(root, value);
	}
	//Inorder printing.
	obj.Inorder(root);

	return 0;
}
