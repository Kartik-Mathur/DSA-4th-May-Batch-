#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	char a[100];
	cin.get(); // Read karo and store mat karo kahi, ignore ho gaya
	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		cout << "Input :" << a << endl;
	}

	return 0;
}
















