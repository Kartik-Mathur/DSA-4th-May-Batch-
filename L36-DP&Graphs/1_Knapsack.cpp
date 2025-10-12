#include <iostream>
using namespace std;

int knapsack(int *price, int *weight, int n, int cap) {
	// base case
	if (n == 0 || cap == 0) {
		return 0;
	}

	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (cap >= weight[n - 1]) {
		op1 = price[n - 1] + knapsack(price, weight, n - 1, cap - weight[n - 1]);
	}
	op2 = 0 + knapsack(price, weight, n - 1, cap);

	return max(op1, op2);
}

int topDown(int *price, int *weight, int n, int cap, int dp[][100]) {
	// base case
	if (n == 0 || cap == 0) {
		return dp[n][cap] = 0;
	}

	if (dp[n][cap] != -1) {
		return dp[n][cap];
	}

	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (cap >= weight[n - 1]) {
		op1 = price[n - 1] + topDown(price, weight, n - 1, cap - weight[n - 1], dp);
	}
	op2 = 0 + topDown(price, weight, n - 1, cap, dp);

	return dp[n][cap] = max(op1, op2);
}

int bottomUp(int *price, int *weight, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int c = 1; c <= capacity; ++c)
		{
			int op1 = INT_MIN, op2 = INT_MIN;
			if (c >= weight[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][c - weight[n - 1]];
			}
			op2 = dp[n - 1][c];

			dp[n][c] = max(op1, op2);
		}
	}

	return dp[N][capacity];

}

int main() {

	int price[] = {3, 4, 5, 2};
	int weight[] = {1, 2, 3, 4};
	int n = sizeof(price) / sizeof(int);
	int cap = 5;

	int dp[100][100];
	memset(dp, -1, sizeof dp);


	cout << knapsack(price, weight, n, cap) << endl;
	cout << topDown(price, weight, n, cap, dp) << endl;
	cout << bottomUp(price, weight, n, cap) << endl;



	return 0;
}
















