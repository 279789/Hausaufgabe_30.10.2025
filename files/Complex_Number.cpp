#include <iostream>
#include <cmath>

class Complex_Number {
	float rel;
	float img;
	
	
	public:
		Complex_Number (float r = 0, float i = 0) : rel(r), img(i) {}

		Complex_Number operator+(Complex_Number rhs) {
			return Complex_Number(rel +rhs.rel, img + rhs.img);
		}

		void print () {
			std::cout << "Realteil: "<< rel<< " Imaginärteil: "<< img <<"\n";
		}

		double abs() {
			
			double Betrag = std::sqrt(std::pow(rel, 2) + std::pow(img, 2) );
		
			return Betrag; 
		}
		
		void add() {
			rel++;
			img++;
		}


};

int main () {
	Complex_Number a(3,7);
	Complex_Number b(7,3);
	Complex_Number c= a+b;
	
	c.print();
	std::cout << "\n" <<"Betrag:" <<  c.abs() << "\n\n"	;
	
	c.add();
	c.print();
	return 0;
}
