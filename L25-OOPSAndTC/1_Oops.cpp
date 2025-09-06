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
		name = NULL; // Cannot have garbage inside a pointer
		cnt++;
	}
	// Initialisation list
	Car(char*a, int p, int m): tyres(4), price(p), model(m) {
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		cnt++;
		// price = p;
		// model = m;
	}

	Car(Car &X): tyres(4) {
		// name = X.name; // X.name = 100
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
			delete []name; // Pehle se kisi aur ko point kar raha hai agr toh delete that
			// memory first and then create new space and copy the data into it....
			// PREVENTS memory leak.....
		}
		name = new char[strlen(x) + 1];
		strcpy(name, x);
	}

	~Car() {
		cnt--;
	}
};
////  ---------------------- BLUEPRINT ------------------------ ////

// This is how we give value to static data members...
int Car::cnt = 0;

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

	cout << "Car Count: " << Car::cnt << endl;
	cout << "Car Count: " << A.cnt << endl;





	return 0;
}
















