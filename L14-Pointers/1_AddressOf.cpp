#include <iostream>
using namespace std;

int main() {

	int a = 10;
	cout << "a  : " << a << endl;
	cout << "&a : " << &a << endl;
	cout << "sizeof(&a) : " << sizeof(&a) << endl;

	float f = 1.11;
	cout << "f  : " << f << endl;
	cout << "&f : " << &f << endl;
	cout << "sizeof(&f) : " << sizeof(&f) << endl;

	int arr[] = {1, 2, 3, 4};
	cout << "arr      : " << arr << endl;
	cout << "&arr[0]  : " << &arr[0] << endl;

	char ch = 'A';
	cout << "sizeof(&ch) : " << sizeof(&ch) << endl;
	cout << "&ch         : " << &ch << endl;



	return 0;
}
















