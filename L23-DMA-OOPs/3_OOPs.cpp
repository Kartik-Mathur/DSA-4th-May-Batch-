#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
public:
	char name[100];
	int price;
	int model;

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

	A.print();
	B.print();
	/*
	cout << A.name << endl;
	cout << A.price << endl;
	cout << A.model << endl;
	*/


	return 0;
}
















