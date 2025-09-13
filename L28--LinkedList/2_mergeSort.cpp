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

node* mergeLL(node* a, node* b) {
	// base case
	if (a == NULL) return b;
	if (b == NULL) return a;

	// recursive case
	if (a->data < b->data) {
		node* nH = a;
		nH -> next = mergeLL(a->next, b);
		return nH;
	}
	else {
		node* nH = b;
		nH->next = mergeLL(a, b->next);
		return nH;
	}
}


node* midLL(node* head) {
	if (head == NULL or head->next == NULL) return head;

	node* f = head->next;
	node* s = head;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}

	return s;
}

node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}

	// recursive case
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. mergeLL
	node* nH = mergeLL(a, b);
	return nH;
}

int main() {

	node* head, *tail;
	head = tail = NULL; // be default pointers mei garbage nhi chhodte

	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 12);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 41);
	insertAtEnd(head, tail, 5);

	printLL(head);
	head = mergeSort(head);
	printLL(head);




	return 0;
}
















