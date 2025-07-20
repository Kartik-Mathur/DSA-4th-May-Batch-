#include <iostream>
using namespace std;

int main() {

	char a[] = "abcd";
	int lena = strlen(a);
	for (int i = 0; i < lena; ++i)
	{
		for (int j = i; j < lena; ++j)
		{
			for (int k = i; k <= j; ++k)
			{
				cout << a[k];
			}
			cout << endl;
		}
	}

	return 0;
}
















