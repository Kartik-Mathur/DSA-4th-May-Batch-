#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		int counter = 0;

		for (int j = 0; j <= n - 2 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				// Swap kardo
				swap(a[j], a[j + 1]);
				counter++;
			}
		}

		if (counter == 0) {
			break; // i ke loop se bahar nikal jaao
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















