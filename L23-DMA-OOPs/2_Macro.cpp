#include <iostream>
using namespace std;
// #define create2d(a,n,m) int **a = new int*[n];\
// for (int i = 0; i < n; ++i)\
// {\
// 	a[i] = new int[m];\
// }
#define create2d(a,n,m) int **a = new int*[n];for (int i = 0; i < n; ++i){a[i] = new int[m];}
#define FOR(n) for (int i = 0; i < n; ++i)


int main() {
	int n, m;
	cin >> n >> m;

	create2d(a, n, m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = i + j;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	// Free space
	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}

	delete[] a;
	a = NULL;

	return 0;
}
















