#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
public:
	char name[100];
	int price;
	int model;

	// default constructor
	Car() {
		cout << "Inside default constructor\n";
	}

	// parameterized constructor
	Car(char*a, int p, int m) {
		cout << "Inside parameterized constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
	}

	// parameterized constructor
	Car(int p, int m, char*a) {
		cout << "Inside parameterized constructor--2\n";
		strcpy(name, a);
		price = p;
		model = m;
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
	Car D( 30, 2022, "MAZA"); // Parameterized constructor

	A.print();
	B.print();
	C.print();
	D.print();
	/*
	cout << A.name << endl;
	cout << A.price << endl;
	cout << A.model << endl;
	*/


	return 0;
}
















