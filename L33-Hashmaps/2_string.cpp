#include <iostream>
using namespace std;

int main() {

	string s;

	s = "Hello";
	cout << s << endl;
	s = "World";

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << "_";
	}
	cout << endl;

	s += "Learning string";
	cout << s << endl;

	s.push_back('$');
	cout << s << endl;
	s.pop_back();
	cout << s << endl;


	return 0;
}
















