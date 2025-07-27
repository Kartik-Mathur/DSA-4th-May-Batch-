#include <iostream>
using namespace std;

void printDecreasing(int n) {
	if (!n) return;

	cout << n << " ";
	printDecreasing(n - 1);
}

void printIncreasing(int n) {
	if (!n) return;

	printIncreasing(n - 1);
	cout << n << " ";
}

int main() {

	int n;
	cin >> n;

	printDecreasing(n);

	return 0;
}
















