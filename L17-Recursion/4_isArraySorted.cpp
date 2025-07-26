#include <iostream>
using namespace std;

// bool isSorted(int *a, int n) {
// 	// base case
// 	if (n <= 1) return true;

// 	bool kyaChotaSortedHai = isSorted(a + 1, n - 1);
// 	if (a[0] <= a[1] and kyaChotaSortedHai == true) return true;
// 	else return false;
// }

bool isSorted(int *a, int n) {
	// base case
	if (n <= 1) return true;

	if (a[0] <= a[1] and isSorted(a + 1, n - 1)) return true;
	else return false;
}


bool isSorted2(int *a, int n) {
	if (n <= 1) return true;

	if (a[n - 1] >= a[n - 2]  and isSorted2(a, n - 1)) return true;
	else return false;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted2(a, n)) cout << "Sorted\n";
	else cout << "Not Sorted\n";



	return 0;
}
















