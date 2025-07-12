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

	return primeHai; // primeHai true hua toh true return hoga, false hua toh
	// false return ho jaega
}

int main() {
	int n;
	cin >> n;

	bool ans = isPrime(n);
	if (ans == false) cout << "Not Prime!!!!\n";
	else cout << "Prime!!!!\n";

	return 0;
}
















