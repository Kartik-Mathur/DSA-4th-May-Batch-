#include <iostream>
using namespace std;
/*
int first7(int *a, int n, int i) {
	// base case
	if (i == n) return -1;

	// work
	if (a[i] == 7) return i;
	// chotiProblem work
	int chotaIndx = first7(a, n, i + 1);

	// badi problem compute
	if (chotaIndx  == -1) {
		return -1;
	}
	else {
		return chotaIndx;
	}
}
*/

/*
int first7(int *a, int n, int i) {
	// base case
	if (i == n) return -1;

	if (a[i] == 7) return i;
	return first7(a, n, i + 1);
}
*/

int first7(int *a, int n) {
	// base case
	if (n == 0) return -1;

	if (a[0] == 7) return 0;
	int chotaIndx = first7(a + 1, n - 1);
	if (chotaIndx == -1) return chotaIndx;
	return chotaIndx + 1;
}

int last7(int *a, int n) {
	if (n == 0) return -1;

	if (a[n - 1] == 7) return n - 1;
	return last7(a, n - 1);
}

void all7(int *a, int n, int i) {
	if (i == n) return;

	// ek ith index meine print kar diya
	if (a[i] == 7) cout << i << " ";

	// Chote array ke indexes ko print krne ke liye recursion ko bol diya
	all7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 3, 7, 4, 7, 5};
	int n = sizeof(a) / sizeof(int);

	// cout << first7(a, n, 0) << endl;
	all7(a, n, 0);

	return 0;
}
















