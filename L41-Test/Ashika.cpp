#include<iostream>
using namespace std;
int main() {
	int test;
	cin >> test;
	long long n, k;
	int arr[1000000];

	for (int i = 0; i < test; i++) {
		cin >> n;
		cin >> k;
		for (int x = 0; x < n; x++) {
			cin >> arr[x];
		}

		for (int i = 0; i < n - k + 1; i++) {
			bool flag = false;
			for (int j = i; j < i + k; j++) {
				if (arr[j] < 0) {
					cout << arr[j] << " ";
					flag = true;
					break;
				}
			}

			if (flag == true) continue;
			else cout << "0 ";
		}
		cout << endl;
	}
	return 0;
}