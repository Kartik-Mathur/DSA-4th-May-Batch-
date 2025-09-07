
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