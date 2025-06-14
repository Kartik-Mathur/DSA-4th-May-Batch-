#include <iostream>
using namespace std;

int main() {

	int n, row, col, x;
	cin >> n;

	row = 1;
	x = (n + 1) / 2;
	while (row <= (n + 1) / 2) {

		col = 1;
		while (col <= n) {

			if ( (row + col == x + 1) || (col == x + row - 1) ) {
				cout << '*';
			}
			else {
				cout << ' ';
			}

			if (col > x + row - 1) break;

			col = col + 1;
		}

		cout << endl;
		row = row + 1;
	}

	// Pattern Mirror
	row = x - 1;
	while (row >= 1) {

		col = 1;
		while (col <= n) {

			if ( (row + col == x + 1) || (col == x + row - 1) ) {
				cout << '*';
			}
			else {
				cout << ' ';
			}

			col = col + 1;
		}

		cout << endl;
		row = row - 1;
	}




	return 0;
}












