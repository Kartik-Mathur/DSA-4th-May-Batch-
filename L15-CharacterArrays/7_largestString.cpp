#include <iostream>
using namespace std;

void copy(char *ans, char *a) {
	int lena = strlen(a);
	for (int i = 0; i <= lena; ++i)
	{
		ans[i] = a[i];
	}
}

int main() {

	int n;
	char ans[1000], a[1000];
	int ansLen = 0;

	cin >> n;
	cin.get();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);
		int lena = strlen(a);

		if (lena > ansLen) {
			copy(ans, a); // ans[] mei a[] ko copy krdo
			ansLen = lena;
		}
	}

	cout << "Largest     : " << ans << endl;
	cout << "Largest Len : " << ansLen << endl;


	return 0;
}
















