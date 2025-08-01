#include <iostream>
using namespace std;

bool isPermutation(char *a, char *b) {
	int freq[26] = {};

	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i] - 'a';
		freq[indx]++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i] - 'a';
		freq[indx]--;
	}

	for (int i = 0; i < 26 ; ++i)
	{
		if (freq[i] != 0) return false;
	}
	return true;
}

int main() {

	char a[] = "abdcba";
	char b[] = "bcbdaa";

	bool ans = isPermutation(a, b);

	if (ans) cout << "Permutation\n";
	else cout << "Not a Permutation\n";

	return 0;
}
















