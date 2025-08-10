#include <iostream>
using namespace std;

bool ratInMaze(char a[][50], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1; // destination solution ka part hoga
		// Print kardo solution ko
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		sol[i][j] = 0;
		return false;
	}

	// recursive case
	sol[i][j] = 1; // i,j par khade hone ka solution assume karlo

	// Pehle right se jaakar check karo
	if (j + 1 < m and a[i][j + 1] != 'X' and sol[i][j + 1] == 0) {
		bool kyaRightSeBaatBani = ratInMaze(a, i, j + 1, n, m, sol);
		if (kyaRightSeBaatBani) return true;
	}

	// Pehle neeche se jaakar check karo
	if (i + 1 < n and a[i + 1][j] != 'X' and sol[i + 1][j] == 0) {
		bool kyaNeecheSeBaatBani  = ratInMaze(a, i + 1, j, n, m, sol);
		if (kyaNeecheSeBaatBani) return true;
	}

	// Backwards check karo
	if (j - 1 >= 0 and a[i][j - 1] != 'X'  and sol[i][j - 1] == 0) {
		bool kyaPeecheSeBaatBani = ratInMaze(a, i, j - 1, n, m, sol);
		if (kyaPeecheSeBaatBani) return true;
	}

	// Upwards
	if (i - 1 >= 0 and a[i - 1][j] != 'X' and sol[i - 1][j] == 0) {
		bool kyaUparSeBaatBani = ratInMaze(a, i - 1, j, n, m, sol);
		if (kyaUparSeBaatBani) return true;
	}

	sol[i][j] = 0;//backtracking
	return false; // i,j cell se possible nhi h maze solve kar paana
}

int main() {

	char maze[][50] = {
		"00X000",
		"00X0X0",
		"00X0X0",
		"X000X0",
	};

	int sol[10][10] = {};
	ratInMaze(maze, 0, 0, 4, 6, sol);


	return 0;
}

















