#include <iostream>
using namespace std;

int main() {

	float i, inc;

	int no, cp;

	cin >> no;

	i = 0;
	inc = 1;
	cp = 0;
	while (cp <= 3) {

		while (i * i <= no) {
			i = i + inc;
		}

		i = i - inc;
		inc = inc / 10;
		cp = cp + 1;
	}

	cout << i << endl;

	return 0;
}
















