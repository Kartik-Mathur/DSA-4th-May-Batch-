#include <iostream>
#include <vector>
using namespace std;

class Minheap {
private:
	void heapify(int i) {
		int mi = i;
		int leftindex = 2 * i;
		int rightindex = leftindex + 1;

		if (leftindex < v.size() and v[mi]>v[leftindex]) mi = leftindex;
		if (rightindex < v.size() and v[mi]>v[rightindex]) mi = rightindex;

		if (i != mi) {
			swap(v[mi], v[i]);
			heapify(mi);
		}
	}
public:
	vector<int> v;
	Minheap() {
		v.push_back(-1);// To block 0th index
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;
		while (p > 0 and v[p] > v[c]) {
			swap(v[p], v[c]);
			p /= 2;
			c /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

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
















