#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int key;
	cin >> key;
	int ans = -1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			ans = i; // ans ko index par set krdo
			break; // Mill gai toh loop se bahar chale jaao
		}
	}

	if (ans == -1) {
		cout << "Key Not Found\n";
	}
	else {
		cout << "Key Found at index : " << ans << endl;
		cout << "Key Found at pos   : " << ans + 1 << endl;
	}

	return 0;
}
















