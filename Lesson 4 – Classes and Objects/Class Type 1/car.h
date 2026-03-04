#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand{"Bugatti"};
    string model{"Veyron"};
    int year{2025};

public:
    void startEngine() {
        cout << "Start V12 Engine" << endl;
    }

    void accelerate() {
        cout << "Accelerate V12 Engine" << endl;
    }
};
