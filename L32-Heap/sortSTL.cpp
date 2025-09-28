#include <iostream>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
	return a < b;
}

int main() {

	// int a[] = {5, 4, 3, 2, 1};
	// int n = sizeof(a) / sizeof(int);
	vector<int> v = {5, 4, 3, 2, 1};

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















