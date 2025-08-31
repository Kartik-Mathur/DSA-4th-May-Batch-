#include <iostream>
using namespace std;

////  ---------------------- BLUEPRINT ------------------------ ////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	const int tyres;
	static int cnt;

	Car(): tyres(4) {
		name = NULL;
		cnt++;
	}
	Car(char*a, int p, int m): tyres(4), price(p), model(m) {
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		cnt++;
		// price = p;
		// model = m;
	}

	Car(Car &X): tyres(4) {
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		cnt++;
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
			delete []name;
		}
		name = new char[strlen(x) + 1];
		strcpy(name, x);
	}

	~Car() {
		cnt--;
	}

	// Operator Overloading
	bool operator>(Car &X) { // A > B
		return price >= X.price;
	}

};
////  ---------------------- BLUEPRINT ------------------------ ////

int Car::cnt = 0;

int main() {
	Car A;
	A.setName("Maruti");
	A.setPrice(-100);
	A.model = 2020;

	Car B = A;
	Car C = B;

	A.name[0] = 'T';
	if (A > B) { // A ne function ko call kia and B as argument pass hoga..
		cout << "A\n";
	}
	else {
		cout << "B\n";
	}

	// A.print();
	// B.print();
	// C.print();






	return 0;
}
















