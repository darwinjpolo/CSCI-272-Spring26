#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name{"Darwin"};
    int age{27};
    char gender{'M'};

    void introduce() {
        cout << "Hello, my name is " << name << ". I am " << age << " years of age.";

        if (gender == 'M') {
            cout << " I'm a male." << endl;
        }
        else if (gender == 'F') {
            cout << " I'm a female." << endl;
        }
        else {
            cout << " Gender unspecified." << endl;
        }
    }
};