#include <iostream>
using namespace std;

int main() {

	int n, num, row, col;
	cin >> n;

	num = 1; // Saare loops se bahar, kyunki num dobara reset nhi hoga
	row = 1; // row ka loop lagaya
	while (row <= n) {

		col = 1; // Har row ke andar cols ka kaam karna hai
		while (col <= row) {
			cout << num << " ";


			num = num + 1; // Har baari num print karke num ko increase kardo
			col = col + 1;
		}

		cout << '\n'; // We need to go to new line
		row = row + 1;
	}

	return 0;
}
















