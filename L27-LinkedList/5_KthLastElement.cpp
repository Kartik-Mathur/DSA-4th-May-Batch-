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


void printLL(node* h) {
	while (h != NULL) {
		cout << h->data << "->";
		h = h->next;
	}
	cout << "NULL\n";
}

node* kthLast(node* head, int k) {

	node* f = head;
	node* s = head;
	for (int i = 0; i < k; ++i)
	{
		f = f->next;
	}

	while (f != NULL) {
		f = f->next;
		s = s->next;
	}

	return s;
}

int main() {

	node* head, *tail;
	head = tail = NULL; // be default pointers mei garbage nhi chhodte

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	// insertAtEnd(head, tail, 6);

	printLL(head);

	node* ans = midLL(head);
	cout << ans->data << endl;



	return 0;
}
















