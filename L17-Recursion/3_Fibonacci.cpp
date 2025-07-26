#include <iostream>
using namespace std;

// int fibo(int n) {
// 	if (n == 1) return 1;
// 	if (n == 0) return 0;

// 	// recursive relation fibo(n) = fibo(n-1)+fibo(n-2)
// 	int cp1 = fibo(n - 1);
// 	int cp2 = fibo(n - 2);

// 	int badaAns = cp1 + cp2;
// 	return badaAns;
// }

int fibo(int n) {
	if (n == 1 || n == 0) return n;

	// recursive relation, fibo(n) = fibo(n-1)+fibo(n-2)
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n;
	cin >> n;
	cout << fibo(n) << endl;


	return 0;
}
















