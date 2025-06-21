#include <iostream>
using namespace std;

int main() {

	int a[] = {6, 5, 7, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 1; i < n; ++i)
	{
		int j = i - 1;
		int temp = a[i];
		while (j >= 0 and a[j] > temp) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = temp;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















