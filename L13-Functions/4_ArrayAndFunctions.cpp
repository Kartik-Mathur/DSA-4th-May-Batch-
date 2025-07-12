#include <iostream>
using namespace std;

// void printArray(int a[9], int n) {
void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);


	printArray(a, n); // Function calling

	return 0;
}
















