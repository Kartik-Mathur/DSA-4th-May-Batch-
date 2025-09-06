#include <iostream>
using namespace std;

class Vector {

public:
	int *arr;
	int ts;
	int cs; // when cs(current size) becomes equals to ts(total size)
	// just double the size of array dynamically
	Vector(int s = 1) {
		cs = 0;
		ts = s;
		arr = new int[ts];
	}

	void push_back(int d) {
		if (cs == ts) {
			int *oldarr = arr;
			int oldts = ts;
			ts *= 2;
			arr = new int[ts];

			for (int i = 0; i < oldts; ++i)
			{
				arr[i] = oldarr[i];
			}
		}

		arr[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	int operator[](int i) {
		return arr[i];
	}
};

int main() {
	Vector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "Size: " << v.size() << endl;
	cout << "Cap : " << v.capacity() << endl;

	return 0;
}
















