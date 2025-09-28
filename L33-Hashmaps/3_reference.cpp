#include <iostream>
using namespace std;

void update(int &a) {
	a = a + 1;
}

int main() {

	int x = 1;
	int *p = &x;
	update(x);
	cout << x << endl;

	return 0;
}
















