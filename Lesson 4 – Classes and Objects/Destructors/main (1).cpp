/* 
Name: Darwin Polo
Course: CSCI 272 
Lesson Number: Lesson 4 
Code Topic: Deconstructor Car Example 
Date: 03/03/2026 
*/ 
#include "car2.h"

int main() {

    Car car1; 

    Car car2("Ford", "Escape", 2012);

    Car car3(car2);

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();


    return 0;
}

/*
Reflection: 
1. What I understood: 
I understood that the destructor is used to clean up when an object is destroyed.
2. Difficulties: 
One of the difficulties was forgetting to add the "~" for the destructor in the 
.h file
3. Research: 
I used the website https://exercism.org/ to further my knowledge on C++
4. AI Usage: 
AI was not used for this code
5. What I learned: 
I learned the destructors make sure that resources are properly released
when an object is no longer needed.
*/