#include <iostream>
using namespace std;

int fibo(int n) {
	if (n <= 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int dp[]) {
	if (n <= 1) {
		return n;
	}
	// Agar nth fibonacci already pata hai toh return krdo dont ask recursion again
	if (dp[n] != -1) {
		return dp[n];
	}

	// Notebook mei likhne wala kaam
	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
	/*
	dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
	return dp[n];
	*/
}

int bottomUp(int n) {
	int dp[10000];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {
	int n;
	cin >> n;
	int dp[10000];
	for (int i = 0; i <= n; ++i)
	{
		dp[i] = -1;
	}

	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















