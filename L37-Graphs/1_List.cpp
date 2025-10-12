#include <iostream>
#include <list>
using namespace std;

int main() {
	// auto x; // Must be initialised
	// x = "Hello";
	auto a = 1; // assumes int
	cout << sizeof(a) << endl;

	list<int> l; // Doubly linked list

	l.push_back(1);
	l.push_back(2);
	l.push_front(3);
	l.push_front(4); // 4->3->1->2

	// list<int> :: iterator it;

	for (auto it = l.begin(); it != l.end(); ++it)
	{
		cout << *it << "--> ";
	}
	cout << endl;

	// For-Each loop
	// For every data d that belongs to linked list (l)
	for (int d : l) {
		cout << d << "--> ";
	}
	cout << endl;


	return 0;
}
















