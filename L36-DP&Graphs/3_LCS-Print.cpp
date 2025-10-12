#include <iostream>
using namespace std;

int lcs(string s1, string s2, int n, int m) {
	if (n == 0 || m == 0) {
		return 0;
	}

	if (s1[n - 1] == s2[m - 1]) {
		return 1 + lcs(s1, s2, n - 1, m - 1);
	}
	else {
		int op1 = lcs(s1, s2, n, m - 1);
		int op2 = lcs(s1, s2, n - 1, m);
		return max(op1, op2);
	}
}


int topDown(string s1, string s2, int n, int m, int dp[][100]) {
	if (n == 0 || m == 0) {
		return dp[n][m] = 0;
	}

	if (dp[n][m] != -1) {
		return dp[n][m];
	}

	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = 1 + topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		int op1 = topDown(s1, s2, n, m - 1, dp);
		int op2 = topDown(s1, s2, n - 1, m, dp);
		return dp[n][m] = max(op1, op2);
	}
}

int bottomUp(string s1, string s2) {
	int dp[100][100] = {};

	for (int i = 1; i <= s1.size(); ++i)
	{
		for (int j = 1; j <= s2.size(); ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	return dp[s1.size()][s2.size()];
}

void printLCS(int dp[][100], string &s1, string &s2) {
	int n = s1.size();
	int m = s2.size();
	string ans = "";
	while (n > 0 and m > 0) {
		if (s1[n - 1] == s2[m - 1]) {
			ans.push_back(s1[n - 1]);
			n--;
			m--;
		}
		else if (dp[n - 1][m] == dp[n][m]) {
			n--;
		}
		else {
			m--;
		}
	}

	reverse(ans.begin(), ans.end());
	cout << "LCS : " << ans << endl;
}

int main() {

	string s1 = "acbde";
	string s2 = "bcde";
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;
	cout << lcs(s1, s2, s1.size(), s2.size()) << endl;
	printLCS(dp, s1, s2);
	return 0;
}
















