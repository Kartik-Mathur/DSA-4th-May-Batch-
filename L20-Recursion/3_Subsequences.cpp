#include <iostream>
using namespace std;

void solve(char *ip, int i, char* op, int j) {
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}
	// Exclude
	solve(ip, i + 1, op, j);
	// Include
	op[j] = ip[i];
	solve(ip, i + 1, op, j + 1);
}

int main() {
	char ip[100] = "abc";
	char op[100];

	solve(ip, 0, op, 0);
	return 0;
}
















