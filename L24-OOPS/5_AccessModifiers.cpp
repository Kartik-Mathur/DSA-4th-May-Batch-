#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
private:
	int price;

public:
	char name[100];
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

	void operator=(Car X) { // Car X = A
		cout << "Inside copy assignment operator function\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	~Car() {
		cout << "Deleting Car " << name << endl;
	}

	// SETTER
	void setPrice(int p) {
		if (p >= 100 and p < 150) price = p;
		else price = 120;
	}
	// GETTER
	int getPrice() {
		return price;
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
	// A.price = 10;
	A.setPrice(-100);
	A.model = 2020;

	cout << A.getPrice() << endl;

	Car B;
	strcpy(B.name, "Audi");
	// B.price = 20;
	B.setPrice(20);
	B.model = 2021;

	Car C("BMW", 30, 2022); // Parameterized constructor

	A.print();
	B.print();
	C.print();



	return 0;
}
















