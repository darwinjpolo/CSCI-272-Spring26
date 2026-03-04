#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand{"Honda"};
    string model{"Civic"};
    int year{2018};

public:

    Car() {}

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    Car(const Car& other) {
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    ~Car() {
        cout << "Object is destroyed" << endl;
    }

    void startEngine() {
       cout << "Start Engine | Brand: " << brand
                  << " | Model: " << model << endl;
    }
};
