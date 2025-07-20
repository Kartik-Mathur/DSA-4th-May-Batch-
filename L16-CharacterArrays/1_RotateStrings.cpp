#include <iostream>
using namespace std;

void rotateString(char *a, int k) {
	// cout << a << endl;
	// 1. Shift all characters by k position
	int lena = strlen(a);
	k %= lena;
	if (k == 0) return;

	int i = lena - 1;
	while (i >= 0) {
		a[i + k] = a[i];

		i--;
	}

	// 2. Bring k characters from last to front
	i = lena;
	int j = 0;
	while (j < k) {
		a[j++] = a[i++];
	}
	// cout << a << endl;
	// 3. Add NULL character
	a[lena] = '\0';
	// cout << a << endl;
}

int main() {

	char a[1000] = "Coding";
	int k = 41567;

	rotateString(a, k);

	cout << a << endl;


	return 0;
}
















