#include <iostream>
using namespace std;

int main() {

	int n, col, i;
	cin >> n;

	char ch = 'A';

	for (i = 1; i <= n; ++i)
	{
		ch = 'A'; // for every row character starts from 'A'

		// increasing characters
		for (col = 1; col <= n - i + 1; ++col)
		{
			cout << ch;
			ch++;
		}

		// decreasing characters
		ch = ch - 1; // Yaha se decreasing characters ko print krna shuru krenge
		for (col = 1; col <= n - i + 1; ++col)
		{
			cout << ch;
			ch--;
		}
		cout << endl;
	}

	return 0;
}
















