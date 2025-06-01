#include <iostream>
using namespace std;

int main() {

	int n, row, spaces, i, no;
	cin >> n;

	row = 1;
	while (row <= n) {

		spaces = 1;
		while (spaces <= n - row) {
			cout << ' ';

			spaces = spaces + 1;
		}

		// 2. Increasing numbers
		no = row; // number print hoga row se
		i = 1;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}

		// 3. Decreasing numbers
		no = 2 * row - 2;
		i = 1;
		while (i <= row - 1) {
			cout << no;
			no = no - 1; // Since decreasing numbers print kar rhey hai
			i = i + 1;
		}


		cout << endl; // To go to next line
		row = row + 1;
	}


	return 0;
}
















