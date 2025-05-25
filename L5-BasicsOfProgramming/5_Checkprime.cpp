#include <iostream>
using namespace std;

int main() {

	int n, i, flag;

	cin >> n;

	flag = 1; // Initially 1 means, n is prime number

	i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {	// Divide ho gaya n with i
			flag = 0; // Pata chala n, i se divide ho gaya. Therefore n is not prime
			break; // Loop se bahar nikal jaao
		}

		i = i + 1;
	}

	if (flag == 0) {
		cout << "Not Prime\n";
	}
	else {
		cout << "Prime\n";
	}


	return 0;
}
















