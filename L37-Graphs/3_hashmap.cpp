#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int > h;

	h.insert({"Mango", 100});
	h.insert({"Apple", 100});
	h.insert({"Banana", 100});
	h.insert({"Kiwi", 100});
	h.insert({"Orange", 100});

	for (auto p : h) {
		cout << p.first << " : " << p.second << endl;
	}

	return 0;
}
















