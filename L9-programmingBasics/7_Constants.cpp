#include <iostream>
using namespace std;

int main() {

	const float pi = 3.14; // This cannot be changed

	cout << pi << endl;

	// constants ko initialise krna is important
	const int x; // Cannot do this, garbage ke saath const buckets nhi banti
	x = 1;

	cout << x << endl;


	return 0;
}
















