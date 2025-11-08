#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int t = 0; t < n; t++) {
		int len;
		cin >> len;

		int k;
		cin >> k;

		int arr[len];

		for (int j = 0; j < len; j++) {
			cin >> arr[j];
		}

		for (int i = 0; i <= len - k; i++) {
			bool negativeMilla = false;
			for (int j = i; j < i + k; ++j)
			{
				if (arr[j] < 0) {
					cout << arr[j] << " ";
					negativeMilla = true;
					break;
				}
			}
			if (negativeMilla == false) cout << 0 << " ";
		}
		cout << endl;


	}
	return 0;
}