#include <iostream>
using namespace std;

int* returnAddress() {
	int a = 10;
	return &a; // Ye nahi krna hai, kyunki jaise hi function khatam hoga a destroy ho jaega
}

void printArray(int *a, int n) {

	for (int i = 0; i < n; ++i)
	{
		// cout << a[i] << " ";
		cout << *(a + i) << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);


	return 0;
}
















