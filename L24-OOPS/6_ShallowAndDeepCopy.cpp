#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
private:
	int price;

public:
	char *name;
	int model;

	Car() {
		name = NULL; // Cannot have garbage inside a pointer
	}

	Car(char*a, int p, int m) {
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
	}

	Car(Car &X) {
		// name = X.name; // X.name = 100
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	void operator=(Car X) { // Car X = A
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	void setPrice(int p) {
		if (p >= 100 and p < 150) price = p;
		else price = 120;
	}

	int getPrice() {
		return price;
	}

	void print() {
		cout << "Name    : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl << endl;
	}

	void setName(char *x) {
		if (name != NULL) {
			delete []name; // Pehle se kisi aur ko point kar raha hai agr toh delete that
			// memory first and then create new space and copy the data into it....
			// PREVENTS memory leak.....
		}
		name = new char[strlen(x) + 1];
		strcpy(name, x);
	}
};
////  ---------------------- BLUEPRINT ------------------------ ////

int main() {
	Car A;
	A.setName("Maruti");
	A.setPrice(-100);
	A.model = 2020;

	Car B = A;
	Car C = B;

	A.name[0] = 'T';

	A.print();
	B.print();
	C.print();





	return 0;
}
















