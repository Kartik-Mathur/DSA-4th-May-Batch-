#include <iostream>
using namespace std;

int main() {

	int ans = 0;
	char ch;

	// cin >> ch; // Yeh character bucket ki initialisation hui
	ch = cin.get();  // Yeh whitespace characters ka input lega
	while (ch != '$') {
		ans++;

		// cin >> ch; // Updation
		ch = cin.get(); // Yeh whitespace characters ka input lega
	}

	cout << "Total characters : " << ans << endl;

	return 0;
}
















