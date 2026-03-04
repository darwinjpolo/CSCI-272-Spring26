#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand{"Jeep"};
    string model{"Grand Wagoneer"};
    int year{2026};

public:
    Car() { 
    }

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

    void startEngine() {
        cout << "Starting " << year << " " << brand << " " << model << endl;
    }
};