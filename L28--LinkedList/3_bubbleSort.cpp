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

void bubbleSort(node* &head) {
	int len = lengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		node* c = head;
		node* p = NULL, *n;
		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) { // swapping hogi
				if (p == NULL) { // head change hoga
					c->next = n -> next;
					n->next = c;
					head = p = n;
				}
				else { // head change nahi hoga
					c->next = n -> next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else { // swapping nahi hogi
				p = c;
				c = n;
			}
		}

	}
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
	bubbleSort(head);
	printLL(head);




	return 0;
}
















