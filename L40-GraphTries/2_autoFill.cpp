#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	unordered_map<char, node*> h;
	bool isEnd;
	char ch;
	node(char c) {
		ch = c;
		isEnd = false;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node('\0');
	}

	void addWord(string word) {
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				temp -> h[ch] = new node(ch);
			}
			temp = temp -> h[ch];
		}

		temp->isEnd = true;
	}

	bool searchWord(string &word) {
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return false;
			}
			temp = temp -> h[ch];
		}

		return temp->isEnd;
	}

	void autoFillHelper(node* temp, string &x) {

		// Jaha temp hai waha agr word end hota hai toh usse hum print kr dete hai
		if (temp->isEnd) cout << x << endl;

		// Baaki ke bacho ka kaam recursion ko bol dete hai krne ko
		for (auto p : temp->h) {
			x.push_back(p.first);
			autoFillHelper(p.second, x);
			x.pop_back();
		}
	}

	void autoFill(string word) {
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return;
			}
			temp = temp -> h[ch];
		}

		string x = word;
		autoFillHelper(temp, x);
	}
};

int main() {

	Trie t;
	t.addWord("He");
	t.addWord("Her");
	t.addWord("Hers");
	t.addWord("Heman");
	t.addWord("Hem");
	t.addWord("Pan");

	t.autoFill("Her");

	return 0;
}
















