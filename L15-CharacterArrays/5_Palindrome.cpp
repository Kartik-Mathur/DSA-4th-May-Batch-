#include <iostream>
using namespace std;

bool isPalindrome(char *a) {
	int len = strlen(a);

	int i = 0;
	int j = len - 1;

	while (i < j) {
		if (a[i] != a[j]) return false;

		i++;
		j--;
	}

	return true;
}

int main() {

	char a[] = "madam";
	if (isPalindrome(a)) cout << "Palindrome\n";
	else cout << "Not a Palindrome\n";

	return 0;
}
















