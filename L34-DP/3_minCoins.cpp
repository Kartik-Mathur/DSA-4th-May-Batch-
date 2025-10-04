#include <iostream>
using namespace std;

int solve(int amount, int *deno, int n) {
	// base case
	if (amount == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amount >= deno[i]) {
			int chotaAns = solve(amount - deno[i], deno, n);
			if (chotaAns != INT_MAX) {
				ans = min(chotaAns + 1, ans);
			}
		}
	}

	return ans;
}

int topDown(int amount, int deno[], int n, int dp[]) {
	// base case
	if (amount == 0) return 0;
	if (dp[amount] != -1) return dp[amount];

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amount >= deno[i]) {
			int chotaAns = topDown(amount - deno[i], deno, n, dp);
			if (chotaAns != INT_MAX) {
				ans = min(chotaAns + 1, ans);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int amount, int deno[], int n) {
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0; // Initialization
	for (int rupay = 1; rupay <= amount; ++rupay)
	{
		for (int i = 0; i < n; ++i)
		{
			if (rupay >= deno[i]) {
				if (dp[rupay - deno[i]] != INT_MAX) {
					dp[rupay] = min(dp[rupay - deno[i]] + 1, dp[rupay]);
				}
			}
		}
	}

	return dp[amount];
}

int main() {

	int deno[] = {1, 7, 10};
	int n = sizeof(deno) / sizeof(int);
	int amount;
	cin >> amount;

	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}
	cout << topDown(amount, deno, n, dp) << endl;
	cout << bottomUp(amount, deno, n) << endl;
	cout << solve(amount, deno, n) << endl;

	return 0;
}
















