#include <iostream>
using namespace std;

int main() {

	int cost[][10] = {
		{1, 1, 3, 2},
		{8, 1, 1, 5},
		{4, 6, 1, 1},
		{9, 15, 22, 1}
	};

	int dp[100][100] = {0};
	int n = 4, m = 4;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i == 0 and j == 0) {
				dp[i][j] = cost[i][j];
			}
			else {
				dp[i][j] = max( i - 1 >= 0 ? dp[i - 1][j] : INT_MIN ,
				                j - 1 >= 0 ? dp[i][j - 1] : INT_MIN) + cost[i][j];
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
















