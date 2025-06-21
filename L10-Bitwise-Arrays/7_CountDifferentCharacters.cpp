#include <iostream>
using namespace std;

int main() {
	// Whitespaces : Space, Tab, Enter

	int digits = 0, alpha = 0, special = 0, whiteSpaces = 0;

	char ch;

	ch = cin.get();
	while (ch != '$') {

		if (ch >= '0' and ch <= '9') digits++;
		else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')) alpha++;
		else if (ch == ' ' or ch == '\t' or ch == '\n') whiteSpaces++;
		else special++;

		ch = cin.get();
	}

	cout << "Digits : " << digits << endl;
	cout << "alpha : " << alpha << endl;
	cout << "special : " << special << endl;
	cout << "whiteSpaces : " << whiteSpaces << endl;


	return 0;
}
















