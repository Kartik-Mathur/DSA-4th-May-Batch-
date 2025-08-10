#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n) {
	// Check the column
	for (int k = 0; k < i; ++k)
	{
		if (board[k][j]) return false;
	}
	int ci = i, cj = j;

	// Check top left diagonal
	while (i >= 0 and j >= 0) {
		if (board[i--][j--]) return false;
	}

	// Check top right diagonal
	i = ci;
	j = cj;
	while (i >= 0 and j < n) {
		if (board[i--][j++]) return false;
	}

	return true;
}

bool nqueen(int board[][10], int i, int n) {
	// base case
	if (i == n) {
		// Print the board if all queens are placed
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << (board[i][j] == 1 ? 'Q' : '_') << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	for (int j = 0; j < n; ++j)
	{
		if (isSafe(board, i, j, n)) { // i,j cell par kya queen rakhna safe hai
			board[i][j] = 1; // if safe hai then queen rakhdo
			bool kyaBakiQueenPlaceHui = nqueen(board, i + 1, n);
			if (kyaBakiQueenPlaceHui) return true;

			board[i][j] = 0; //backtracking
		}
	}

	return false;// [0,n-1] kisi bhi column pr queen place nhi ho paai ith row ke
}

int main() {

	int board[10][10] = {0};

	nqueen(board, 0, 4);

	return 0;
}
















