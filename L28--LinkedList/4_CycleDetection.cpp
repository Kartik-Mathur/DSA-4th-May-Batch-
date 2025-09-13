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
void breakCycle(node* head, node*f) {
	node* s = head;
	node* pf = head;
	while (pf->next != f) pf = pf->next;

	while (f != s) {
		pf = f;
		f = f->next;
		s = s->next;
	}

	pf->next = NULL;
}

bool cycleLL(node* head) {
	node* f = head, * s = head;

	while (f != NULL and f->next != NULL) {
		f = f->next ->next;
		s = s->next;
		if (f == s) {
			breakCycle(head, f);
			return true;
		}
	}

	return false;
}

int main() {

	node* head, *tail;
	head = tail = NULL; // be default pointers mei garbage nhi chhodte

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);

	printLL(head);
	tail -> next = head->next ->next ->next;
	if (cycleLL(head)) cout << "Cyclic LL\n";
	else cout << "not cyclic\n";
	printLL(head);




	return 0;
}
















