#include <iostream>
using namespace std;

int main() {

	int no, ans = 0, rem;

	cin >> no;
	while (no > 0) {
		rem = no % 2;

		if (rem == 1) {
			ans++;
		}

		no /= 2;
	}

	cout << "Set Bits: " << ans << endl;

	return 0;
}
















