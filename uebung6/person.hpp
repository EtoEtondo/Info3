// ---------------------------------------------------
// person.hpp
// Definition einer einfachen Klasse Person.
// ---------------------------------------------------

#ifndef person_hpp
#define person_hpp

#include <iostream>

using namespace std;


class Person {
    
private:
    string name = "noname";     // string für Name
    char sex = 'x';             // char für Geschlecht
    
public:
    Person();
    Person(string n, char s);
    
    string getName() const;
    char getSex() const;
    
    void setName(string n);
    void setSex(char s);
    
};


#endif /* person_hpp */
