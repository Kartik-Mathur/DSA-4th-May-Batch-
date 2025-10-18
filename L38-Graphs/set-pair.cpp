#include <iostream>
#include <set>
using namespace std;

int main() {

	set<pair<int, string> > s;

	s.insert({7, "D"});
	s.insert({5, "C"});
	s.insert({2, "B"});
	// s.insert({2, "B"});

	s.erase({2, "B"});
	s.insert({12, "B"});

	auto ans = s.find({15, "C"});
	if (ans != s.end()) {
		cout << "Found " << (*ans).first << ", " << (*ans).second << endl;
	}
	else {
		cout << "Not Found\n";
	}


	while (!s.empty()) {
		auto address = s.begin();

		pair<int, string> p = *address;

		s.erase(address);

		cout << p.first << ", " << p.second << endl;
	}

	return 0;
}
















