#include <iostream>
#include <cstring> // memset
using namespace std;

int solve(int *wine, int l, int r, int day) {
	// base case
	if (l > r) {
		return 0;
	}
	// recursive case
	int op1 = wine[l] * day + solve(wine, l + 1, r, day + 1);
	int op2 = wine[r] * day + solve(wine, l, r - 1, day + 1);

	return max(op1, op2);
}

int topDown(int *wine, int l, int r, int day, int dp[][100]) {
	// base case
	if (l > r) {
		return dp[l][r] = 0;
	}

	if (dp[l][r] != -1) {
		return dp[l][r];
	}
	// recursive case
	int op1 = wine[l] * day + topDown(wine, l + 1, r, day + 1, dp);
	int op2 = wine[r] * day + topDown(wine, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *wine, int n) {
	int dp[100][100] = {0};
	for (int l = n - 1; l >= 0; --l)
	{
		for (int r = l; r < n; ++r)
		{
			int day = n - (r - l);
			int op1 = wine[l] * day + (l + 1 < n ? dp[l + 1][r] : 0);
			int op2 = wine[r] * day + (r - 1 >= 0 ? dp[l][r - 1] : 0);

			dp[l][r] = max(op1, op2);
		}
	}

	return dp[0][n - 1];
}

int main() {
	int a[] = {2, 3, 5, 1, 4};
	int n = sizeof(a) / sizeof(int);
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << topDown(a, 0, n - 1, 1, dp) << endl;
	cout << bottomUp(a, n) << endl;
	cout << solve(a, 0, n - 1, 1) << endl;

	return 0;
}
















