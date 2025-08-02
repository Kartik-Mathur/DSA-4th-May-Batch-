#include <iostream>
using namespace std;

int stringToInt(char *a, int n) {
	if (!n) return 0;

	int digit = a[n - 1] - '0';
	int cans = stringToInt(a, n - 1);

	return cans * 10 + digit;
}

int main() {

	char a[] = "1234";
	int n = strlen(a);

	cout << stringToInt(a, n) << endl;
	cout << stringToInt(a, n) + 10 << endl;





	return 0;
}
















