/* 
Name: Darwin Polo
Course: CSCI 272 
Lesson Number: Lesson 4 
Code Topic: Constructor Car Example 
Date: 03/03/2026 
*/ 

#include "car.h"

int main() {
    Car car1; 
    Car car2("Audi", "RS7", 2023); 
    Car car3(car2);          

    Car* pCar1 = new Car;               
    Car* pCar2 = new Car("BMW", "i8", 2017); 

    Car cars[20];            

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    cars[0].startEngine();

    return 0;
}

/*
Reflection: 
1. What I understood: 
I learned more about the default constructor creating an object with 
preset values, while the parameterized constructor allows specific values
for the brand, model, and year to be passed when creating the object.
2. Difficulties: 
One of the difficulties was understanding why Car* pCar1 = new Car; creates
an object and why the arrow (->) must be used to call functions on a pointer.
3. Research: 
I used the website https://exercism.org/ to further my knowledge on C++
4. AI Usage: 
I used AI to assist me on clarifying the pointers and arrays in the code
5. What I learned: 
I learned the difference between creating objects directly and with pointers,
and copying objects using a copy constructor.
*/