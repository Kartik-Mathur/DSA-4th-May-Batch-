#include <iostream>
using namespace std;

int main() {
	int n, row, i;
	cin >> n;

	row = 1;
	while (row <= n) {

		// 1. Spaces print karne hai n-row times
		i = 1;
		while (i <= n - row) {
			cout << ' ';

			i = i + 1;
		}

		// 2. row times star
		i = 1;
		while (i <= row) {
			cout << '*';
			i = i + 1;
		}

		cout << endl;
		row = row + 1;
	}

	return 0;
}
















