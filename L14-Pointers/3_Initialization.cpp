#include <iostream>
using namespace std;

int main() {

	int *a = NULL, *b = NULL; // NULL means 0th address, 0th address is not accessible

	// cout << "a   : " << a << endl;
	// cout << "*a  : " << *a << endl;

	// cout << "b   : " << b << endl;
	// cout << "*b  : " << *b << endl;

	int x = 10;
	int *y = &x;

	*y += 5;

	cout << x << endl;

	return 0;
}
















