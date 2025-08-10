#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s,
           int e) {
	int m = (s + e) / 2;

	int i = s, j = s, k = m + 1;
	while (j <= m and k <= e) {
		if (b[j] < c[k]) a[i++] = b[j++];
		else a[i++] = c[k++];
	}

	while (j <= m) a[i++] = b[j++];
	while (k <= e) a[i++] = c[k++];
}

void mergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) return;

	// recursive case
	// 1. Divide
	int m = (s + e) / 2;
	int b[1000], c[1000];
	for (int i = s; i <= m; ++i)
	{
		b[i] = a[i];
	}

	for (int i = m + 1; i <= e; ++i)
	{
		c[i] = a[i];
	}

	// 2. Sort-Assumption
	mergeSort(b, s, m); // b[] ko sort krdo [s,m] index range tak
	mergeSort(c, m + 1, e); // c[] ko sort krdo [m+1,e] index range tak

	// 3. Merge Sorted b[] and Sorted c[] into a[], to keep resultant sorted
	merge(a, b, c, s, e);
}

int main() {

	int a[] = {6, 4, 7, 2, 1, 5};
	int n = sizeof(a) / sizeof(int);

	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















