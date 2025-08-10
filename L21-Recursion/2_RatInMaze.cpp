#include <iostream>
using namespace std;

bool ratInMaze(char a[][5], int i, int j, int n, int m, int sol[][10]) {
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
		return false;
	}

	// recursive case
	sol[i][j] = 1; // i,j par khade hone ka solution assume karlo

	// Pehle right se jaakar check karo
	if (j + 1 < m and a[i][j + 1] != 'X') {
		bool kyaRightSeBaatBani = ratInMaze(a, i, j + 1, n, m, sol);
		if (kyaRightSeBaatBani) return true;
	}

	// Pehle neeche se jaakar check karo
	if (i + 1 < n and a[i + 1][j] != 'X') {
		bool kyaNeecheSeBaatBani  = ratInMaze(a, i + 1, j, n, m, sol);
		if (kyaNeecheSeBaatBani) return true;
	}

	sol[i][j] = 0;//backtracking
	return false; // i,j cell se possible nhi h maze solve kar paana
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[10][10] = {};
	ratInMaze(maze, 0, 0, 4, 4, sol);


	return 0;
}

















