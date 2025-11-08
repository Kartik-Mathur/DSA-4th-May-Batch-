#include <iostream>
#include <map>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* createTree() {
	// base case
	int data;
	cin >> data;
	// data -1 aaega toh recursion call nhi hoga that means this is the base case
	if (data == -1) {
		return NULL;
	}
	// recursive case
	// root node hum bana denge
	node * root = new node(data);
	root->left = createTree();// LST recursion ko bolegne chota tree hai tu bana kar de
	root->right = createTree(); // RST recursion ko bolenge chota tree hai tu bana kar de
	return root; // once root, LST and RST both are created we will return the root node..
}

void preorder(node* root) {
	if (root == NULL) { // Tree hi nhi hai toh vapis jaao kuch nhi print ho paega..
		return;
	}

	cout << root->data << " "; // root ka data print krenge sabse pehle
	preorder(root->left); // LST ko print krenge, recursion se keh kar
	preorder(root->right); // RST ko print krenge, recursion se keh kar
}

void inorder(node* root) {
	if (root == NULL) {
		return;
	}

	inorder(root->left); // LST ka kaam recursion ko boldo...
	cout << root->data << " "; // LST ke baad we will print root ka data
	inorder(root->right); // RST ka kaam recursion ko boldo krne ko
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}

	postorder(root->left); // LST ka kaam recursion ko boldo...
	postorder(root->right); // RST ka kaam recursion ko boldo krne ko
	cout << root->data << " "; // LST and RST ke baad we will print root ka data
}

void TreeRightViewHelper(node* root, int level, map<int, int> &h) {
	// base case
	if (root == NULL) {
		return;
	}

	// Root node ka kaam mei krunga agar uska level tree mei nhi h toh insert krdo.
	if (!h[level]) {
		h[level] = root->data;
	}

	// Right Tree ka kaam recursion ko bolo krne ko
	TreeRightViewHelper(root->right, level + 1, h);
	// Left Tree ka kaam recursion ko bolo krne ko
	TreeRightViewHelper(root->left, level + 1, h);
}

void TreeRightView(node* root) {
	map<int, int> h;
	int level = 1;

	TreeRightViewHelper(root, level, h);
	cout << endl;
	for (auto p : h) {
		cout << "Level " << p.first << " : " << p.second << endl;
	}
}

int main() {

	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node* root = createTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);

	TreeRightView(root);

	return 0;
}
















