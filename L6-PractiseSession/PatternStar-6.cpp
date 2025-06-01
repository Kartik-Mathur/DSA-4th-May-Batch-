#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;

	row = n;
	while (row >= 1) {

		// 1. Spaces
		i = 1;
		while (i <= n - row) {
			cout << ' ';

			i = i + 1;
		}

		// 2. Stars
		i = 1;
		while (i <= 2 * row - 1) {
			cout << '*';

			i = i + 1;
		}

		cout << endl;
		row = row - 1;
	}


	return 0;
}
















