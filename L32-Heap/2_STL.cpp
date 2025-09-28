#include <iostream>
#include <queue>
using namespace std;

class comparator {
public:
	// FUNCTOR: Circular brackets ki operator overloading is functor
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {

	// priority_queue<int> h; // Maxheap
	priority_queue<int, vector<int>, comparator> h; // Minheap

	h.push(3);
	h.push(1);
	h.push(2);
	h.push(5);
	h.push(4);

	// HEAP SORT -> T.C: O(log2N)
	while (!h.empty()) {
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl;

	return 0;
}
















