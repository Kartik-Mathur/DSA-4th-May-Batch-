#include <iostream>
using namespace std;

void inputString(char *a, int N, char delimiter = '\n') {
	int i = 0;
	char ch = cin.get();

	while (i < N - 1 && ch != delimiter) {
		a[i] = ch;
		i++;

		ch = cin.get();
	}

	a[i] = '\0';
}

int main() {

	char a[100];
	inputString(a, 100, '#');
	// cin.getline(a, 100);

	cout << a << endl;

	return 0;
}
















