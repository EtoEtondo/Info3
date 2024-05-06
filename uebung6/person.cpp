// ---------------------------------------------------
// person.cpp
// Implementierung der Methoden der Klasse Person.
// ---------------------------------------------------

#include "person.hpp"

#include <iostream>
#include <string>

using namespace std;



// Konstruktoren

Person::Person() {}

Person::Person(string n, char s) {
    if(n.size() >= 1) name = n;
    if(s == 'm' || s == 'w') sex = s;
    else sex = 'x';
}



// get-Methoden

string Person::getName() const {
    return name;
}

char Person::getSex() const {
    return sex;
}



// set-Methoden

void Person::setName(string n) {
    if(n.size() >= 1) name = n;
}

void Person::setSex(char s) {
    if(s == 'm' || s == 'w') sex = s;
    else sex = 'x';
}
