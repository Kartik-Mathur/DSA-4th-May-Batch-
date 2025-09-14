#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;

	for (int i = 0; a[i]; ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '(':
		case '[':
		case '{': // in teeno mei se koi bhi bracket aaya stack mei insert kardo...
			s.push(a[i]);
			break;
		case ')':
			// Agar top par stack mei ( yeh nhi hua toh balanced nhi ho skta
			if (!s.empty() and s.top() != '(') {
				return false;
			}
			s.pop();
			break;
		case ']':
			if (!s.empty() and s.top() != '[') {
				return false;
			}
			s.pop();
			break;
		case '}':
			if (!s.empty() and s.top() != '{') {
				return false;
			}
			s.pop();
			break;
		}
	}

	if (s.empty()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	char a[] = "[{a+b*(c+d)*(d+f)}]";

	if (isBalanced(a) == true) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}
















