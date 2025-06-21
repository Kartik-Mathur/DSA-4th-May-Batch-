#include <iostream>
using namespace std;

int main() {

	int a[100]; // Maximum size of this array could by 10^6
	int n;
	cin >> n; // Total buckets user input dena chahta hai (MAX: 100)

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















