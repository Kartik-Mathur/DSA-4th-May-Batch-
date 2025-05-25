#include <iostream>
#include <climits> // INT_MAX = 2^31-1 and INT_MIN = -2^31
using namespace std;

int main() {

	int n, i, num, ans;

	ans = INT_MIN; // -2^31
	cin >> n; // To take value of n, itne numbers user input krega

	i = 1;
	while (i <= n) {
		cin >> num;

		if (num > ans) {
			ans = num; // Agar num is bigger than ans, then update ans
		}

		i = i + 1;
	}

	cout << "Largest number is : " << ans << endl; // endl = '\n'

	return 0;
}
















