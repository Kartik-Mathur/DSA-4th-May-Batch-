#include <iostream>
#include <random>
using namespace std;

void print2D(int a[][10], int n, int m) {

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void initialiseRandom(int a[][10], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 10;
		}
	}
}

void searchKey(int a[][10], int n, int m, int key) {
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key found at: " << i << ", " << j << endl;
				flag = true;
				break;
			}
		}

		if (flag == true) break;// Agar flag true hai toh mtlb key mill gai
		// no point to continue thus break the loop
	}

	if (flag == false) cout << "Key not found\n";
}

int main() {

	int a[10][10];
	int n, m;

	cout << "Enter rows(max 10) and cols(max 10): ";
	cin >> n >> m;
	int number = 1;
	int key;
	cout << "Enter key to search: ";
	cin >> key;

	initialiseRandom(a, n, m);
	print2D(a, n, m);
	searchKey(a, n, m, key);


	return 0;
}
















