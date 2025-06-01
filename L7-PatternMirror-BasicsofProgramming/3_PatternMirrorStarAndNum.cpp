#include <iostream>
using namespace std;

int main() {

	int row, n, col;
	cin >> n;

	row = 1;
	while (row <= n) {

		col = 1;
		while (col <= 2 * row - 1) {
			if (col % 2 == 0) {
				cout << "* ";
			}
			else {
				cout << row << ' ';
			}

			col = col + 1;
		}


		cout << endl;
		row = row + 1;
	}

	row = n - 1;
	while (row >= 1) {

		col = 1;
		while (col <= 2 * row - 1) {
			if (col % 2 == 0) {
				cout << "* ";
			}
			else {
				cout << row << ' ';
			}

			col = col + 1;
		}


		cout << endl;
		row = row - 1;
	}


	return 0;
}
















