#include <iostream>
using namespace std;

int main() {

	pair<int, int> p;
	pair<string, int> p1;

	p.first = 1;
	p.second = 2;

	cout << p.first << ", " << p.second << endl;

	p1.first = "Orange";
	p1.second = 20;

	cout << p1.first << ", " << p1.second << endl;

	// pair<string, string> p2 = {"Abhishek", "Sharma"};
	pair<string, string> p2 = make_pair("Abhishek", "Sharma");
	cout << p2.first << ", " << p2.second << endl;

	return 0;
}
















