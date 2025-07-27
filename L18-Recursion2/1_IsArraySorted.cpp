#include <iostream>
using namespace std;

bool isSorted(int *a, int n, int i) {
	if (i == n - 1) return true;

	if (a[i] < a[i + 1] and isSorted(a, n, i + 1)) return true;

	return false;
}

int main() {
	int a[] = {1, 2, 3, -4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted(a, n, 0)) {
		cout << "Sorted\n";
	}
	else cout  << "Not Sorted\n";


	return 0;
}
















