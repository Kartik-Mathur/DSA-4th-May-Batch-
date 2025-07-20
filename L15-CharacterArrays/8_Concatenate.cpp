#include <iostream>
using namespace std;

void append(char *a, char *b) {
	int i = strlen(a);
	int j = 0;

	int lenb = strlen(b);

	while (j <= lenb) {
		a[i++] = b[j++];
	}
}

int main() {

	char a[100] = "Hello";
	char b[100] = "World";

	// append(a, b); // a[] ke andar b[] ko add krdo
	strcat(a, b); // a[] ke andar b[] ko add krdo

	cout << a << endl;


	return 0;
}
















