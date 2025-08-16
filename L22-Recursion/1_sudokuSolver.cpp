#include <iostream>
#include <cmath> //sqrt
using namespace std;

bool safeHai(int a[][9], int i, int j, int n,
             int no) {
	for (int k = 0; k < n; ++k)
	{
		if (a[i][k] == no || a[k][j] == no)
			return false;
	}
	n = sqrt(n);

	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (a[i][j] == no) return false;
		}
	}

	return true;
}

bool sudoku(int a[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		//  print sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	// What if entire row is filled?
	if (j == n) {
		bool kyaBakiRowsSolveHui = sudoku(a, i + 1, 0, n);
		return kyaBakiRowsSolveHui;
	}

	// Skip filled cell
	if (a[i][j] != 0) {
		return sudoku(a, i, j + 1, n);
	}

	// recursive case
	for (int no = 1; no <= n; ++no)
	{
		if (safeHai(a, i, j, n, no)) {
			a[i][j] = no;
			bool baakiSolved =  sudoku(a, i, j + 1, n);
			if (baakiSolved) return true;
			a[i][j] = 0; // backtracking
		}
	}

	return false;
}

int main() {

	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudoku(mat, 0, 0, 9);


	return 0;
}
















