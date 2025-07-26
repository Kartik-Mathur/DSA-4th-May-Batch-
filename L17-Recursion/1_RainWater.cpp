#include <iostream>
using namespace std;

int main() {

	int a[] = {2, 5, 4, 2, 5, 1, 7, 6, 10};
	int n = sizeof(a) / sizeof(int);

	int lm[100], rm[100];

	int ans = a[0];
	lm[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		lm[i] = ans;
		ans = max(ans, a[i]);
	}

	rm[n - 1] = 0;
	ans = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		rm[i] = ans;
		ans = max(ans, a[i]);
	}

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int res = min(lm[i], rm[i]) - a[i];
		if (res > 0) sum += res;
	}

	cout << sum << endl;

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << lm[i] << " ";
	// }
	// cout << endl;

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << rm[i] << " ";
	// }
	// cout << endl;


	return 0;
}
















