#include <iostream>

class Complex_Number {
	int rel;
	int img;
	
	public:
		Complex_Number (int r = 0, int i = 0) : rel(r), img(i) {}

		Complex_Number operator+(Complex_Number rhs) {
			return Complex_Number(rel +rhs.rel, img + rhs.img);
		}

		void print () {
			std::cout << "Realteil: "<< rel<< " Imaginärteil: "<< img <<"\n";
		}
};

int main () {
	Complex_Number a(3,7);
	Complex_Number b(7,3);
	Complex_Number c= a+b;
	
	c.print();

	return 0;
}
