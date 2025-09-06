#include <iostream>
using namespace std;

void update(int*&y) {
	// *y += 1;
	y = NULL;
}


int main() {

	int a = 10;
	int *x = &a;

	update(x);

	cout << *x << endl;
	cout << a << endl;

	return 0;
}
















