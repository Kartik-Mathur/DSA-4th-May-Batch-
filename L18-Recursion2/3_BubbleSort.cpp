#include <iostream>
using namespace std;

// void bubbleSort(int *a, int n, int i) {
// 	if (i == n - 1) return;

// 	for (int j = 0; j < n - 1 - i; ++j)
// 	{
// 		if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
// 	}

// 	bubbleSort(a, n, i + 1);
// }
// 1. When  j becomes equals to n-1-i, then only we call bubbleSort(a, n, i + 1);
// 2. When bubbleSort(a, n, i + 1) get executed j again starts from 0

void bubbleSort(int *a, int n, int i, int j) {
	if (i == n - 1) return;

	if (j < n - 1 - i) {
		if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		bubbleSort(a, n, i, j + 1);
	}
	else {
		bubbleSort(a, n, i + 1, 0);
	}
}

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n, 0, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















