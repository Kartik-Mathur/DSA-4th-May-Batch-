#include <iostream>
using namespace std;

int main() {

	int n, row, j;
	cin >> n;

	row = 1;
	while (row <= n) {

		// Print stars n-row+1 times
		j = 1;
		while (j <= n - row + 1) {
			cout << "*";

			j = j + 1;
		}

		cout << endl;
		row = row + 1;
	}


	return 0;
}
















