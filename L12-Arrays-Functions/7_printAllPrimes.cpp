#include <iostream>
using namespace std;

bool isPrime(int n) {

	bool primeHai = true;
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			primeHai = false;
			break;
		}
	}

	return primeHai;
}

void printAllPrimes(int n) {

	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i) == true) cout << i << " ";
	}

	cout << endl;
}

int main() {

	int n;
	cin >> n; // 10

	printAllPrimes(n);



	return 0;
}
















