#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
public:
	char name[100];
	int price;
	int model;

	Car() {
		cout << "Inside default constructor\n";
	}

	Car(char*a, int p, int m) {
		cout << "Inside parameterized constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
	}

	Car(Car &X) {
		cout << "Inside copy constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// Copy Assignment Operator
	/*
	Car A("Audi");
	Car B("BMW");
	B = A;// Already bane huye object ko update karna hai toh we have this copy assignment
	*/
	void operator=(Car X) { // Car X = A
		cout << "Inside copy assignment operator function\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	void print() {
		cout << "Name    : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl << endl;
	}
};
////  ---------------------- BLUEPRINT ------------------------ ////

int main() {
	Car A;
	strcpy(A.name, "Maruti");
	A.price = 10;
	A.model = 2020;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 20;
	B.model = 2021;

	Car C("BMW", 30, 2022); // Parameterized constructor
	C = A;

	A.print();
	B.print();
	C.print();



	return 0;
}
















