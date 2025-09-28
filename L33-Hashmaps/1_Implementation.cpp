#include <iostream>
using namespace std;

class node {
public:
	int value;
	string key;
	node* next;
	node(string k, int v) {
		key = k;
		value = v;
	}
};

class hashmap {
private:
	int hashFunction(string &key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += ((key[i] % ts) % ts * (mul % ts) % ts) % ts;
			mul *= 17 % ts;
		}

		return ans % ts;
	}

	void rehashing() {
		node** olda = a;
		int oldts = ts;
		ts *= 2;
		cs = 0;
		a = new node*[ts];
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head) {
				insert(head->key, head->value);
				head = head->next;
			}
		}

		delete []olda;
	}

public:
	node** a;
	int ts;
	int cs;

	hashmap(int s = 5) {
		a = new node*[s];
		ts = s;
		cs = 0;

		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int value) {
		int hashIndex = hashFunction(key);
		node* n = new node(key, value);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float loadFactor = cs / (ts * 1.0);
		if (loadFactor > 0.6) {
			rehashing();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << " : ";
			while (head) {
				cout << "(" << head->key << ", " << head->value << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}

	node* searchKey(string key) {
		int hashIndex = hashFunction(key);
		node* head = a[hashIndex];
		while (head != NULL) {
			if (head-> key == key) {
				return head;
			}

			head = head->next;
		}
		return NULL;
	}

	int& operator[](string key) {
		node* ans = searchKey(key);
		if (ans == NULL) {
			// key ko insert kr diya with random value
			insert(key, -1);
			ans = searchKey(key);
		}

		return ans -> value;
	}
};

int main() {

	hashmap h;
	h["Orange"] = 190; // Insert
	cout << h["Orange"] << endl; // Print
	h["Orange"] = 110; // Update

	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("Kiwi", 90);
	h.insert("Banana", 901);
	h.insert("Papaya", 910);
	// h.insert("Orange", 190);





	h.print();

	return 0;
}
















