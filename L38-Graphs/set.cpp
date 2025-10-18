#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(5);
	s.insert(2);
	s.insert(4);
	s.insert(1);
	s.insert(3);

	for (auto d : s) {
		cout << d << " ";
	}
	cout << endl;


	return 0;
}
















