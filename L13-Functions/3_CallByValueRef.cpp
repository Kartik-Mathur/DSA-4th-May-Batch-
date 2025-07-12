#include <iostream>
using namespace std;

void update(int &x) {
	x++;
	cout << "x : " << x << endl;
}

int main() {

	int a = 1;

	cout << "Before Update a : " << a << endl;
	// a++;
	update(a); // Update krenge a ko via function
	cout << "After  Update a : " << a << endl;

	return 0;
}
















