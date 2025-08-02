#include <iostream>
using namespace std;
/*
bool check7(int *a, int n) {
	if (n == 0)  return false;

	// check7(a,n) = work + check7(a+1,n-1)
	if (a[0] == 7) return true;
	bool kyaChoteArrayMei7Hai = check7(a + 1, n - 1);
	if (kyaChoteArrayMei7Hai == true) return true;
	else {
		return false;
	}
}
*/
bool check7(int *a, int n) {
	if (n == 0)  return false;

	// check7(a,n) = work + check7(a+1,n-1)
	if (a[0] == 7) return true;
	return check7(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 17};
	int n = sizeof(a) / sizeof(int);

	if (check7(a, n)) cout << "Present\n";
	else cout << "Not Present\n";

	return 0;
}
















