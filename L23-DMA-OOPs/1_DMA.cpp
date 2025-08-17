#include <iostream>
using namespace std;

int main() {

	int *x = new int;

	*x = 10;

	cout << *x << endl;

	delete x;
	x = NULL;
	// cout << *x << endl;

	int n;
	cin >> n;
	int*arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	delete []arr;
	arr = NULL;

	return 0;
}
















