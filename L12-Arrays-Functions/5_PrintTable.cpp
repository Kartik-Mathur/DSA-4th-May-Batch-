#include <iostream>
using namespace std;

void printTable(int init, int fval, int step) {
	int far, cel;

	far = init; // start
	while (far <= fval) { // Condition check

		cel = (5 / 9.0) * (far - 32);
		cout << far << "  " << cel << endl;

		far = far + step; // Updation
	}
}

int main() {

	int init, fval, step;
	cin >> init >> fval >> step; // Take input

	printTable(init, fval, step);
	cout << "\nPrinting Another Table: \n";
	printTable(0, 200, 50);


	return 0;
}
















