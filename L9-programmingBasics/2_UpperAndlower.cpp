#include <iostream>
using namespace std;

int main() {

	int x;

	char ch;
	cin >> ch;

	x = ch; // character ko integer bucket mei store kar diya

	if (x >= 65 and x <= 90) {
		cout << "Uppercase\n";
	}
	else if (x >= 97 and x <= 122) {
		cout << "Lowercase\n";
	}
	else {
		cout << "Special Character\n";
	}



	return 0;
}
















