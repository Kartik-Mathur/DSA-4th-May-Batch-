#include <iostream>
using namespace std;

int main() {

	int ans = 0, ld;
	int no;

	cin >> no; // number ki initialisation is here
	for (   ; no > 0; no /= 10)
	{
		ld = no % 10;
		ans = ans * 10 + ld;
	}

	cout << ans << endl;


	return 0;
}
















