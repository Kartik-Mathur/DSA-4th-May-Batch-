#include <iostream>
#include <vector>
using namespace std;

int main() {

	int arr[1000][1000];
	vector<int> v;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
			v.push_back(arr[i][j]);
		}
	}

	int r, c;
	cin >> r >> c;
	int newArr[1000][1000];
	if (n * m == r * c) {
		int indx = 0;
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				newArr[i][j] = v[indx++];
			}
		}

		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cout << newArr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}



	return 0;
}
















