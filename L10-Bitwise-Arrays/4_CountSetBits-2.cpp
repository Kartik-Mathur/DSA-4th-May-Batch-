#include <iostream>
using namespace std;

int main() {

	int no, ans = 0, lsb;

	cin >> no;
	while (no > 0) {
		lsb = no & 1;

		if (lsb == 1) {
			ans++;
		}

		no = no >> 1;
	}

	cout << "Set Bits: " << ans << endl;

	return 0;
}
















