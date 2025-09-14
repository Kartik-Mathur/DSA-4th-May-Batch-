#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int top) {
	if (s.empty()) {
		s.push(top);
		return;
	}

	int x = s.top();
	s.pop();
	insertAtBottom(s, top);
	s.push(x);
}

void reverseStack(stack<int> &s) {
	if (s.empty()) {
		return ;
	}

	int top = s.top();
	s.pop();
	reverseStack(s);
	insertAtBottom(s, top);
}

int main() {

	stack<int> s;

	for (int i = 1; i < 5; ++i)
	{
		s.push(i);
	}

	// recursively reverse stack...
	reverseStack(s);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
















