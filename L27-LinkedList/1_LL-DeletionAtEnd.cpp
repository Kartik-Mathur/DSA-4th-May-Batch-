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

int lengthLL(node* h) {
	int cnt = 0;
	while (h != NULL) {
		cnt++;
		h = h->next;
	}

	return cnt;
}

void insertAtFront(node* &h, node* &t, int data) {
	if (h == NULL) {
		h = t = new node(data);
	}
	else {
		node* n = new node(data);
		n -> next = h;
		h = n;
	}
}

void insertAtEnd(node* &h, node* &t, int data) {
	if (h == NULL) {
		h = t = new node(data);
	}
	else {
		node* n = new node(data);
		t->next = n;
		t = n;
	}
}

void insertAtMid(node* &h, node* &t, int pos, int data) {
	if (pos == 0) {
		insertAtFront(h, t, data);
	}
	else if (pos >= lengthLL(h)) {
		insertAtEnd(h, t, data);
	}
	else {

		node* temp = h;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void printLL(node* h) {
	while (h != NULL) {
		cout << h->data << "->";
		h = h->next;
	}
	cout << "NULL\n";
}

void deleteAtFront(node* &h, node* &t) {
	if (h == NULL) return;
	else if (h -> next == NULL) { // There is only one node in LL
		delete h;
		h = t = NULL;
	}
	else {
		node* temp = h;
		h = h->next;
		delete temp;
	}
}


void deleteAtEnd(node* &head, node* &tail) {
	node* t = head;
	while (t->next != tail) {
		t = t->next;
	}

	delete tail;
	t->next = NULL;
	tail = t;
}

void deleteAtMiddle(node* &head, node*& tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = t->next;
		t->next = n->next;
		delete n;
	}
}

int main() {

	node* head, *tail;
	head = tail = NULL; // be default pointers mei garbage nhi chhodte

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtMid(head, tail, 3, 10);

	printLL(head);

	// deleteAtEnd(head, tail);
	// deleteAtEnd(head, tail);
	deleteAtMiddle(head, tail, 4);
	printLL(head);


	return 0;
}
















