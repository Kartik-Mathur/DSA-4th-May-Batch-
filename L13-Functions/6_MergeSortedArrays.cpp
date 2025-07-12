#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void mergeSortedArrays(int a[], int n, int b[], int m) {
	int i = n - 1;
	int j = m - 1;
	int k = n + m - 1;

	while (i >= 0 and j >= 0) {
		if (b[j] > a[i])
		{
			a[k--] = b[j--];
		}
		else {
			a[k--] = a[i--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

int main() {

	int a[7] = {2, 4, 5, 6};
	int n = 4;

	int b[] = {1, 3, 7};
	int m = 3;

	mergeSortedArrays(a, n, b, m);

	printArray(a, n + m);



	return 0;
}
















