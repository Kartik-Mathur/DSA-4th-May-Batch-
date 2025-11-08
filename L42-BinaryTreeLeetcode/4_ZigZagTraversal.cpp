#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
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

void ZigZagTraversal(node* root) {
	vector<int> v;

	queue< node*> q;
	q.push(root);
	q.push(NULL);

	int level = 0;

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			v.push_back(x->data);

			if (x->left) {
				q.push(x->left);
			}
			if (x->right) {
				q.push(x->right);
			}
		}
		else { // x == NULL
			if (level % 2 == 1) {
				reverse(v.begin(), v.end());
			}
			for (int i = 0; i < v.size(); ++i)
			{
				cout << v[i] << " ";
			}

			level++;
			v.clear();
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}

	}


}

int main() {

	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node* root = createTree();
	ZigZagTraversal(root);

	return 0;
}
















