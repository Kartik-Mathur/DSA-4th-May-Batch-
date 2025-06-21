#include <iostream>
using namespace std;

int main() {

	int a[5], n;

	n = 5; // Array ke andar total buckets

	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}

	// cout << a[0] << endl;
	// cout << a[1] << endl;
	// cout << a[2] << endl;
	// cout << a[3] << endl;
	// cout << a[4] << endl;


	return 0;
}
















