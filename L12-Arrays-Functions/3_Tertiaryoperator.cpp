#include <iostream>
using namespace std;

int main() {


	int a = -11;
	// (condition) ? work_on_true_condition : work_on_false_condition ;

	a % 2 == 0 ? cout << "Even!!!\n" : cout << "Odd!!!\n";

	// Assigning Values using Ternary Operator
	int x;
	x = (a > 1 ? 10 : -10);

	cout << x << endl;
	/*
		if (a % 2 == 0) {
			cout << "Even\n";
		}
		else {
			cout << "Odd\n";
		}
	*/


	return 0;
}
















