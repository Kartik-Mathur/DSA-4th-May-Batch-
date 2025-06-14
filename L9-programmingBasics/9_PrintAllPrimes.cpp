#include <iostream>
using namespace std;

int main() {

	int n, no, flag, i;
	cin >> n;

	for (no = 2; no <= n; ++no)
	{
		// We make flag = 0, for every no
		flag = 0; // This means number is prime
		for (i = 2; i <= no - 1; ++i)
		{
			if (no % i == 0) {
				flag = 1; // flag ki value change krdi
				break;
			}
		}

		// Bahar aa gaye toh check karo flag ki value ko
		if (flag == 0) { // Print the number only if flag is 0
			cout << no << " ";
		}

	}

	cout << endl;

	return 0;
}
















