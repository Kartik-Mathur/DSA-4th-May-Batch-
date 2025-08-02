#include <iostream>
using namespace std;

// int multiply(int a, int b) {
// 	if (!b) return 0;

// 	int chotiProblem = multiply(a, b - 1);
// 	int badiProblem = a + chotiProblem;
// 	return badiProblem;
// }

int multiply(int a, int b) {
	if (!b) return 0;

	return  a + multiply(a, b - 1);
}

int main() {

	int a = 5, b = 6;

	cout << multiply(a, b) << endl;

	return 0;
}
















