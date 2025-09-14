#include <iostream>
using namespace std;

class Queue {
public:
	int *a;
	int n;
	int cs;
	int f, e;
	Queue(int s = 5) {
		a = new int[s];
		cs = 0;
		f = 0;
		n = s;
		e = n - 1;
	}

	void push(int d) {
		if (cs < n) {
			e = (e + 1) % n;
			a[e] = d;
			cs++;
		}
		else {
			cout << "Queue Overflow\n";
		}
	}
	void pop() {
		if (cs == 0) {
			cout << "Underflow\n";
			return;
		}
		f = (f + 1) % n;
		cs--;
	}
	bool empty() {
		return cs == 0;
	}
	int front() {
		return a[f];
	}
};

int main() {

	Queue q(6);

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
















