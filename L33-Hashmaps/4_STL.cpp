#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	unordered_map<string, int> h;
	// map<string, int> h; // O(logN) -> Data is sorted on the basis of key
	// We insert pair of string and int in hashmap
	pair<string, int> p1;
	p1.first = "Orange";
	p1.second = 20;

	h.insert(p1);
	h.insert({"Apple", 120});
	h.insert({"Kiwi", 20});
	h.insert(make_pair("Banana", 90));
	h.insert(make_pair("Papaya", 90));
	h.insert(make_pair("Grapes", 90));

	// For-Each loop
	// For every pair p that belongs to hashmap h
	// for (pair<string, int> p : h) {
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}

	// To print the entire hashtable -> Only for unordered map
	// for (int i = 0; i < h.bucket_count(); ++i)
	// {
	// 	cout << i << " : ";
	// 	for (auto it = h.begin(i) ; it != h.end(i); it++) {
	// 		cout << "(" << it->first << ", " << it->second << ") ";
	// 	}
	// 	cout << endl;
	// }


	return 0;
}
















