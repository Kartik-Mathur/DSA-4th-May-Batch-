#include <iostream>
using namespace std;

int main() {


	char ch;
	cin >> ch;

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 'e':
	case 'E':
		cout << "East\n";
		break;
	case 'w':
	case 'W':
		cout << "West\n";
		break;
	case 's':
	case 'S':
		cout << "South\n";
		break;
	default:
		cout << "Invalid Character\n";
	}

	/*
		if (ch == 'N') cout << "North\n";
		else if (ch == 'E') cout << "East\n";
		else if (ch == 'W') cout << "West\n";
		else if (ch == 'S') cout << "South\n";
		else cout << "Invalid Character\n";
	*/
	return 0;
}
















