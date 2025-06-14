#include <iostream>
using namespace std;

int main() {

	int init, fval, step, far, cel;

	cin >> init >> fval >> step; // Take input

	far = init; // start
	while (far <= fval) { // Condition check

		cel = (5 / 9.0) * (far - 32);

		cout << far << "  " << cel << endl;


		far = far + step; // Updation
	}

	return 0;
}
















