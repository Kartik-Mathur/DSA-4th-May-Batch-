#include <iostream>
using namespace std;

int main() {

	int n, row, col;
	cin >> n;

	row = 1;
	while (row <= n) {

		col = 1;
		while (col <= n) {

			if (row == col || (row + col == n + 1)) {
				cout << '*';
			}
			else {
				cout << ' ';
			}

			col = col + 1;
		}

		cout << endl;
		row = row + 1;
	}


	return 0;
}
















