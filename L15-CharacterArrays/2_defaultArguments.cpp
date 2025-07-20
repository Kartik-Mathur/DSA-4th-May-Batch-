#include <iostream>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0) {
	return a + b + c;
}

int main() {

	cout << sum(10, 20, 30) << endl;
	cout << sum(10, 20) << endl;
	cout << sum(10) << endl;
	cout << sum() << endl;


	return 0;
}
















