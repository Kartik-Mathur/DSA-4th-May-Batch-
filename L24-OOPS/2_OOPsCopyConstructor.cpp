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

	// Copy Constructor
	/*
	Yeh function call krne ke 2 ways are:
	1. Car B = A; // A already bana hua hai
	2. Car B(A); // A already bana hua hai
	*/
	// Car &X = A;
	// Car X = A; // Again copy constructor call
	Car(Car &X) {
		cout << "Inside copy constructor\n";
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
	Car D = A;

	A.print();
	B.print();
	C.print();
	D.print();



	return 0;
}
















