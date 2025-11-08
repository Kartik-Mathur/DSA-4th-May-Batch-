#define node TreeNode
class Solution {
public:
	vector<int> ans;
	void TreeRightViewHelper(node* root, int level, map<int, int> &h) {
		// base case
		if (root == NULL) {
			return;
		}

		// Root node ka kaam mei krunga agar uska level tree mei nhi h toh insert krdo.
		if (h.count(level) == 0) {
			h[level] = root->val;
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
			// cout << "Level " << p.first << " : " << p.second << endl;
			ans.push_back(p.second);
		}
	}


	vector<int> rightSideView(TreeNode* root) {
		TreeRightView(root);

		return ans;
	}
};














