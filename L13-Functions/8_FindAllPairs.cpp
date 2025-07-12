#include <iostream>
using namespace std;

int main() {

	int a[] = {0, 1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int x = 5;
	for (int i = 0; i < n; ++i)
	{
		int num1 = a[i]; // Ek element agar a[i] hai
		int num2 = x - num1; // Toh doosra element should be x - a[i], yeh array mei find kro

		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] == num2) {
				cout << num1 << ", " << num2 << endl;
				break;
			}
		}


	}



	return 0;
}
















