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
};

int main() {

	Trie t;
	t.addWord("Her");
	t.addWord("He");
	t.addWord("Him");
	t.addWord("Pan");

	while (true) {
		string key;
		cin >> key;
		if (t.searchWord(key)) {
			cout << "Present\n";
		}
		else {
			cout << "Not Present\n";
		}
	}



	return 0;
}
















