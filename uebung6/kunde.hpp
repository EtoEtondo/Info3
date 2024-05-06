// ---------------------------------------------------
// kunde.hpp
// Definition einer einfachen Klasse Kunde.
// ---------------------------------------------------

#ifndef kunde_hpp
#define kunde_hpp

#include "person.hpp"
#include "datum.hpp"


class Kunde : public Person {
    
private:
    short alter = 0;    // short füt Alter
    
public:
    Kunde();
    Kunde(string name, char sex, Datum bday);
    
    short getAlter() const;
    
    void setAlter(Datum bday);
    
};


#endif /* kunde_hpp */
