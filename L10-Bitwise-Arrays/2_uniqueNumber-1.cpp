#include <iostream>
using namespace std;
/*
	11
	1 4 3 2 5 6 1 3 2 5 6
*/
int main() {

	int n, ans = 0, no;
	cin >> n; // Total numbers jo user input krega

	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		ans ^= no; // ans = ans ^no;
	}

	cout << "Unique number is : " << ans << endl;


	return 0;
}
















