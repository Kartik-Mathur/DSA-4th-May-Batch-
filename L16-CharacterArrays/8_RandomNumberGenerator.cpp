#include <iostream>
#include <random>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

	srand (time(NULL));
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;


	return 0;
}
















