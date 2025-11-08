#include<iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
vector <int> firstnegative(int* arr, int n, int size) {
	vector <int> ans;
	deque<int> q;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			q.push_back(i);
		}
		while (!q.empty() and q.front() < i + k - 1) {
			q.pop_front();
		}
		if (i >= size - 1) {
			if (!q.empty()) {
				ans.push_back(q.front());
			}
			else {
				ans.push_back(0);
			}
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, size;
		cin >> n >> size;
		int arr[1000];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector <int> ans = firstnegative(arr, n, size);
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}