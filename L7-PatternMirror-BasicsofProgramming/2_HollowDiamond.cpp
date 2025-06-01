#include <iostream>
using namespace std;

int main() {

	int row, n, spaces_cnt, i, stars_cnt;
	cin >> n;


	row = 1;
	while (row <= (n + 1) / 2) {

		if (row == 1) {
			// Print n stars
			i = 1;
			while (i <= n) {
				cout << '*';
				i = i + 1;
			}
		}
		else {
			spaces_cnt = 2 * (row - 1) - 1;
			stars_cnt = (n - spaces_cnt) / 2;

			// 1. Stars
			i = 1;
			while (i <= stars_cnt) {
				cout << "*";
				i = i + 1;
			}

			// 2. Spaces
			i = 1;
			while (i <= spaces_cnt) {
				cout << " ";
				i = i + 1;
			}

			// 3. Stars
			i = 1;
			while (i <= stars_cnt) {
				cout << "*";
				i = i + 1;
			}
		}

		cout << endl;
		row = row + 1;
	}

	// Pattern Mirror
	row = (n + 1) / 2 - 1;
	while (row >= 1) {

		if (row == 1) {
			// Print n stars
			i = 1;
			while (i <= n) {
				cout << '*';
				i = i + 1;
			}
		}
		else {
			spaces_cnt = 2 * (row - 1) - 1;
			stars_cnt = (n - spaces_cnt) / 2;

			// 1. Stars
			i = 1;
			while (i <= stars_cnt) {
				cout << "*";
				i = i + 1;
			}

			// 2. Spaces
			i = 1;
			while (i <= spaces_cnt) {
				cout << " ";
				i = i + 1;
			}

			// 3. Stars
			i = 1;
			while (i <= stars_cnt) {
				cout << "*";
				i = i + 1;
			}
		}

		cout << endl;
		row = row - 1;
	}

	return 0;
}
















