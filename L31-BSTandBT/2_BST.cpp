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

node* insertInBST(node* root, int d) {
	if (!root) {
		root = new node(d);
		return root;
	}

	if (root->data > d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}

node* createBST() {
	int data;
	cin >> data;
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}


void preOrder(node* root) {
	if (!root) return;
	cout << root->data << ", ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << ", ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
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

void printRange(node* root, int k1, int k2) {
	if (!root) {
		return;
	}

	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}

	printRange(root->left, k1, k2);
	printRange(root->right, k1, k2);
}

node* searchBST(node* root, int key) {
	if (!root) {
		return NULL;
	}

	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	if (!root) return true;

	if (root->data >= mi and root->data <= mx and isBST(root->left) and isBST(root->right)) {
		return true;
	}
	else {
		return false;
	}
}

class Pair {
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root) {
	Pair p;
	if (!root) {
		p.height = 0;
		p.balanced = true;
		return p;
	}
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);
	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.balanced and right.balanced) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}

	return p;
}

class LinkedList {
public:
	node*head, *tail;
};

LinkedList bstToLL(node* root) {
	LinkedList l;
	if (!root) {
		l.head = l.tail = NULL;
		return l;
	}

	if (root->left != NULL and root->right != NULL) {
		LinkedList left = bstToLL(root->left);
		LinkedList right = bstToLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if (root->left != NULL and root->right == NULL) {
		LinkedList left = bstToLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (root->left == NULL and root->right != NULL) {
		LinkedList right = bstToLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else {
		l.head = root;
		l.tail = root;
		return l;
	}
}

node* arrayToBST(int *a, int s, int e) {
	if (s > e) return NULL;

	int mid = (s + e) / 2;
	node* root = new node(a[mid]);
	root->left = arrayToBST(a, s, mid - 1);
	root->right = arrayToBST(a, mid + 1, e);
	return root;
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	// node* root = createBST();
	node* root = arrayToBST(a, 0, n - 1);

	// LinkedList l = bstToLL(root);

	// node* temp = l.head;
	// while (temp != NULL) {
	// 	cout << temp->data << "--> ";
	// 	temp = temp->right;
	// }
	// cout << "NULL\n";
	// Pair ans = isBalanced(root);
	// if (ans.balanced) cout << "balanced\n";
	// else cout << "Not balanced\n";
	// printRange(root, 5, 10);
	// int key;
	// cin >> key;
	// node* ans = searchBST(root, key);
	// if (ans) cout << "FOUND\n";
	// else cout << "NOT FOUND\n";
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	// levelOrderPrint(root);

	return 0;
}
















