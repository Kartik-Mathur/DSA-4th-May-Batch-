#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{4, 5, 7, 8},
		{3, 8, 9, 2},
		{5, 6, 7, 1}
	};

	int n = 4;
	int m = 4;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
















