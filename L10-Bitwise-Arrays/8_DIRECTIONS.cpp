#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 0;

	char ch;
	ch = cin.get();
	while (ch != '\n') {
		if (ch == 'N') y++;
		else if (ch == 'S') y--;
		else if (ch == 'E') x++;
		else if (ch == 'W') x--;

		ch = cin.get();
	}

	if (x >= 0) {
		for (int i = 1; i <= x; ++i) cout << 'E';
	}

	if (y >= 0) ch = 'N';
	else ch = 'S';

	y = abs(y);
	for (int i = 0; i < y; ++i) cout << ch;

	if (x <= 0) {
		x = abs(x);
		for (int i = 1; i <= x; ++i) cout << 'W';
	}

	cout << endl;


	return 0;
}
















