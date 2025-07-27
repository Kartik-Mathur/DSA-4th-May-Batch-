#include <iostream>
using namespace std;

char keys[][10] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void intToString(int n) {
	if (!n) return;


	intToString(n / 10);

	int ld = n % 10;
	cout << keys[ld] << " ";
}

int main() {

	int n; cin >> n;
	intToString(n);


	return 0;
}
















