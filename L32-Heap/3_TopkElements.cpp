#include <iostream>
#include <functional> // greater<int> and less<int>
#include <queue>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > h) {
	while (!h.empty()) {
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl;
}

int main() {
	// K = 3
	// 1 3 2 4 1 -1
	// Whenever -1 is encountered then we need to print 2, 3 and 4
	// 1 3 2 4 1 -1 5 1 1 1 1 1 1 1 -1
	// Output: 3, 4, 5 (Shuru se ab tak top K elements batane hai)
	// 1 3 2 4 1 -1 5 1 1 1 1 1 1 1 -1 6 2 2 2 1 1 1 -1
	// Output: 4, 5, 6

	int k = 3;
	priority_queue<int, vector<int>, greater<int> > h; // Minheap
	// priority_queue<int, vector<int>, greater<int> > h1; // Minheap
	int cs = 0;
	while (1) { // This loop will run infinite times...
		int no;
		cin >> no;

		if (no == -1) {
			// Print the heap
			printHeap(h);
		}
		else {
			if (cs < k) {
				h.push(no);
				cs++;
			}
			else {
				if (no > h.top()) {
					h.pop();
					h.push(no);
				}
			}
		}
	}

	return 0;
}
















