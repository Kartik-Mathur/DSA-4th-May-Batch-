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




int main() {

	node* head, *tail;
	node* head1, *tail1;
	head = tail = NULL; // be default pointers mei garbage nhi chhodte
	head1 = tail1 = NULL; // be default pointers mei garbage nhi chhodte

	insertAtEnd(head, tail, 1);
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head1, tail1, 6);

	printLL(head);
	printLL(head1);
	node* x = mergeLL(head, head1);
	printLL(x);




	return 0;
}
















