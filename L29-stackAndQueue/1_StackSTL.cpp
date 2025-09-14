#include <iostream>
#include<stack>
using namespace std;

int main() {
	stack<int> s;
	int number;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> number;
		s.push(number);
	}
	/*
		for (int i = 1; i < 5; ++i)
		{
			s.push(i);
		}
	*/
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}
















