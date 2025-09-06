#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class LinkedList {
public:
	node* head, *tail;

	LinkedList() {
		head = tail = NULL;
	}

	void insertAtFront(int data) {
		if (head == NULL) {
			head = tail = new node(data);
		}
		else {
			node* n = new node(data);
			n -> next = head;
			head = n;
		}
	}

	void printLL() {
		node* temp = head; // head ko store karlo
		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL\n";
	}

};


int main() {

	LinkedList l;
	l.insertAtFront(1);
	l.insertAtFront(2);
	l.insertAtFront(3);

	l.printLL();
	l.printLL();
	return 0;
}
















