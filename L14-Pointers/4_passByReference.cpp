#include <iostream>
using namespace std;

void update(int *a) {
	*a += 1;
}


int main() {

	int x = 10;
	cout << "x  : " << x << endl;

	update(&x);

	cout << "x  : " << x << endl;



	return 0;
}
















