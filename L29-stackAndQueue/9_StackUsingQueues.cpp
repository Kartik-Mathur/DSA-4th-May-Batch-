#include <iostream>
#include <queue>
using namespace std;


class Stack {
public:
	queue<int> q1, q2;
	void push(int d) {
		if (!q2.empty()) { // q2 khaali nhi hai toh ussi mei daalo data
			q2.push(d);
		}
		else { // dono khaali hai toh choose q1 to add data, q1 khaali nhi h toh bhi ussi mei add kro
			q1.push(d);
		}
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int x = q1.front();
				q1.pop();
				q2.push(x);
			}
			int ans = q1.front();
			q1.pop();
			q2.push(ans);
			return ans;
		}
		else if (q1.empty() and !q2.empty()) {
			while (q2.size() > 1) {
				int x = q2.front();
				q2.pop();
				q1.push(x);
			}
			int ans = q2.front();
			q2.pop();
			q1.push(ans);
			return ans;
		}
		return -1;
	}

	void pop() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int x = q1.front();
				q1.pop();
				q2.push(x);
			}
			q1.pop();
		}
		else if (q1.empty() and !q2.empty()) {
			while (q2.size() > 1) {
				int x = q2.front();
				q2.pop();
				q1.push(x);
			}
			q2.pop();
		}
	}

	bool empty() {
		if (q1.empty() and q2.empty()) return true;
		else return false;
	}
};

int main() {
	Stack s;

	for (int i = 1; i < 5; ++i)
	{
		s.push(i);
	}

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
















