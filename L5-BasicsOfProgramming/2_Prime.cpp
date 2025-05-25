#include <iostream>
using namespace std;

int main() {

	int n, i;

	cin >> n;

	i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {	// Divide ho gaya n with i
			cout << "Not Prime\n";
			return 0; // Pata chal gaya prime nahi hai toh khatam karo
		}

		i = i + 1;
	}

	// Yaha aa gaye, means n kisi bhi i se divide nhi hua otherwise program end ho jaata
	cout << "Prime\n";

	return 0;
}
















