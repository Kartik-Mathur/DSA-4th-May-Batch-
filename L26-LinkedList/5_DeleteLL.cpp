#include <iostream>
using namespace std;

#include "Node.h"
#include "lengthLL.h"
#include "insertLL.h"
#include "printLL.h"

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
	deleteAtFront(head, tail);
	deleteAtFront(head, tail);
	deleteAtFront(head, tail);
	deleteAtFront(head, tail);
	deleteAtFront(head, tail);
	printLL(head);

	return 0;
}
















