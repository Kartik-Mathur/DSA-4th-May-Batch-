#include <iostream>
#include <climits> // INT_MIN: -2^31
using namespace std;

int main() {

	int a[] = {1, 2, 31, 14, 5};
	int n = sizeof(a) / sizeof(int);

	int lar = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > lar) {
			lar = a[i];
		}
	}

	cout << "Largest value: " << lar << endl;


	return 0;
}
















