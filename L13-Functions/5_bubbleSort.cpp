#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j <= n - 2 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				// Swap kardo
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {

	int a[] = {6, 7, 5, 8, 9, 2, 0};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n); // Sorting se phle ka array
	bubbleSort(a, n);
	printArray(a, n); // Sorting ke baad ka array


	return 0;
}
















