#include <iostream>
using namespace std;

int main() {

	int n, row, no, col;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{
		if (row % 2 == 0) {
			no = 0; // Even rows ke liye no starts from 0
		}
		else {
			no = 1; // Odd rows ke liye no starts from 1
		}


		for (col = 1; col <= row; col++) {

			cout << no << " ";

			no = 1 - no; // no print krke usse toggle krdo
		}

		cout << endl;
	}

	return 0;
}
















