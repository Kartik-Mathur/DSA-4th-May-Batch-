#include <iostream>
using namespace std;

char keys[10][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void solve(char*ip, int i, char* op, int j) {
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	int d = ip[i] - '0';
	for (int k = 0; keys[d][k] ; ++k)
	{
		op[j] = keys[d][k];
		solve(ip, i + 1, op, j + 1);
	}
}


int main() {

	char ip[100], op[100];
	cin >> ip;
	solve(ip, 0, op, 0);

	// int d = 8;
	// cout << keys[d] << endl;

	// for (int i = 0; keys[d][i] != '\0'; ++i)
	// {
	// 	cout << keys[d][i] << " ";
	// }
	// cout << endl;


	return 0;
}
















