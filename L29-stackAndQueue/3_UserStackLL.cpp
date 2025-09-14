#include <iostream>
#include <vector>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next  = NULL;
	}
};

class Stack {
public:
	node* head;
	Stack() {
		head = NULL;
	}

	void push(int d) {
		if (!head) {
			head = new node(d);
		}
		else {
			node* n = new node(d);
			n->next = head;
			head = n;
		}
	}

	void pop() {
		if (!head) return;
		else if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		node* temp = head;
		head = head->next;
		delete temp;
	}

	int top() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}
};

int main() {
	Stack s;

	for (int i = 1; i < 5; ++i)
	{
		s.push(i);
	}

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
















