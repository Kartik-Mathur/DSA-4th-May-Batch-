#include <iostream>
using namespace std;

// int fact(int n) {
// 	if (!n) return 1;

// 	return n * fact(n - 1);
// }

void fact(int n, int &ans) {
	if (!n) return;
	ans =  n * ans;
	fact(n - 1, ans);
}

int main() {

	// cout << fact(5) << endl;
	int ans = 1;
	fact(5, ans);
	cout << ans << endl;
	return 0;
}
















