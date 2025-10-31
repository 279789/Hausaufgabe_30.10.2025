#include <iostream>
#include <vector>
#include <string>
#include <limits>

class car_t {

private:
    std::string name;
    int age;
    float retail_price;
    int sales_price;

public:
    car_t() = default;		//standard konstruktor
    car_t(std::string n, int a, float r, int s)
        :name(n), age(a), retail_price(r), sales_price(s) {}

    static car_t fromUserInput() {
        std::string n;
        int a, s;
        float r ;

        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "\n" << "Name: ";
        std::getline(std::cin, n);

        std::cout << "Age: ";
        std::cin >> a;

        std::cout << "Retail price: ";
        std::cin >> r;
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

        return car_t(n, a, r, 0);
    }


    void print() const {
        std::cout 	<< "Name: " << name << "\n"
                    << "Age: " << age << "\n"
                    << "Retail price: " << retail_price << "\n\n\n";
    }


    void operator++() {			//adding the ++ operator

        age++;

    }


};


std::vector<car_t> add_car_to_end(std::vector<car_t> cars, car_t actualcar) {

    cars.push_back(actualcar);
    return cars;
}


void print_cars(std::vector<car_t>& cars) {

    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(const auto& actualcar : cars) {
        actualcar.print();
    }

}
void age_cars(std::vector<car_t>& cars) {	//Attention, & stands for ref and is neaded,
    //otherwise you would create a copy which is sensless, cause your won't save that copy.


    for(car_t& actualcar : cars) {

        ++actualcar;			// using the ++ operator
    }

}





int main () {
    std::vector<car_t> cars;
    car_t car;
    char choice;

    while(1) {

        std::cout 	<< "Choose option:\n"
                    <<"(1) Create a car and insert at the end\n"
                    <<"(2) Print list\n"
                    <<"(3) Delete cars\n"
                    <<"(4) Age cars\n"
                    <<"(q) Quit\n\n\n"
                    <<("Type option :");

        std::cin 	>> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Necessary, cause otherwise this entry gets jumped
        std::cout	<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        switch(choice) {
        case '1':
            car = car_t::fromUserInput();
            cars.push_back(car);


            break;

        case '2':
            print_cars(cars);
            break;

        case '3':
            cars.clear();

            break;

        case '4':
            age_cars(cars);

            break;

        case 'q':
            return 0;

        default:
            printf("Wrong character!\n");



        }

    }
    return 0;



}
