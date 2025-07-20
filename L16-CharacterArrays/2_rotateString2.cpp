#include <iostream>
using namespace std;

void reverseString(char *a, int s, int e) {
	while (s <= e) {
		swap(a[s++], a[e--]);
	}
}

void rotateString(char *a, int k) {
	int lena = strlen(a);
	k %= lena;
	if (k == 0) return;

	// 1. Rotate Entire String
	reverseString(a, 0, lena - 1);
	// 2. Rotate [0,k-1]
	reverseString(a, 0, k - 1);
	// 3. Rotate[k,lena-1]
	reverseString(a, k, lena - 1);
}

int main() {

	char a[] = "Coding";

	int k = 4;

	rotateString(a, k);

	cout << a << endl;

	return 0;
}
















