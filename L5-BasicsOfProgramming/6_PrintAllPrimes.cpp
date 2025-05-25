#include <iostream>
using namespace std;

int main() {

	int num, n;
	cin >> num;

	n = 2;
	while (n <= num) {

		flag = 1; // this means prime number
		// Write logic to check prime hai ya nahi h 'n'
		i = 2;
		while (i <= n - 1) {
			if (n % i == 0) {
				flag = 0;
				break;
			}

			i = i + 1;
		}


		if (flag == 1) {
			cout << n << " ";
		}

		n = n + 1;
	}

	return 0;
}
















