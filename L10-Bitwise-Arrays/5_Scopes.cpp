#include <iostream>
using namespace std;

int a = -10; // Global Scope

int main() {

	int a = 1000;

	if (a > 1) {
		int b = 1;

		cout << b << endl;
		::a = ::a + 20;
		cout << ::a << endl; // Will leave all the scopes and check global scope
	}

	cout << a << endl;

	return 0;
}
















