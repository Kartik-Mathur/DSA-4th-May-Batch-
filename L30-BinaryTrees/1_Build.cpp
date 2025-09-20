#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* buildTree() {
	int d;
	cin >> d;
	if (d == -1) return NULL;

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void preOrder(node* root) {
	if (!root) return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int countNodes(node* root) {
	if (!root) return 0;

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int height(node* root) {
	if (!root) return 0;

	return max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root) {
	if (!root) return 0;

	int op1 = height(root->left) + height(root->right); // Maximum diameter via root node
	int op2 = diameter(root->left); // LST ka maximum diameter batade
	int op3 = diameter(root->right); // RST ka maximum diameter batade

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int dia;
};

Pair fastDiameter(node* root) {
	Pair p;
	if (!root) {
		p.height = p.dia = 0;
		return p;
	}

	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	p.height = max(left.height, right.height) + 1;
	int op1 = left.height + right.height;
	int op2 = left.dia;
	int op3 = right.dia;
	p.dia = max(op1, max(op2, op3));
	return p;
}

node* searchNode(node* root, int key) {
	if (!root) return NULL;

	if (root->data == key) return root;

	node* ans = searchNode(root->left, key);
	if (ans != NULL) return ans;

	return searchNode(root->right, key);
}

void levelOrderPrint(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left != NULL) {
				q.push(x->left);
			}
			if (x->right != NULL) {
				q.push(x->right);
			}
		}
		else {
			cout << '\n';
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

void mirror(node* root) {
	if (!root) {
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {
	node* root = buildTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "Total Nodes : " << countNodes(root) << endl;
	cout << "Total Height: " << height(root) << endl;
	cout << "Diameter    : " << diameter(root) << endl;

	Pair p = fastDiameter(root);
	cout << "Fast height   : " << p.height << endl;
	cout << "Fast Diameter : " << p.dia << endl;

	node* ans = searchNode(root, 41);
	if (ans != NULL) {
		cout << "FOUND " << ans->data << endl;
	}
	else {
		cout << "Not Found\n";
	}

	levelOrderPrint(root);
	mirror(root);
	levelOrderPrint(root);
	return 0;
}
















