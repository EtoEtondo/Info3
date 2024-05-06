// ---------------------------------------------------
// verkaeufer.hpp
// Definition einer einfachen Klasse Verkaeufer.
// ---------------------------------------------------

#ifndef verkaeufer_hpp
#define verkaeufer_hpp

#include "person.hpp"
#include "warenkorb.hpp"

class Verkaeufer : public Person {
    
private:
    unsigned int v_id = 0;      // unsigned int für Verkaeufer-ID
    
public:
    Verkaeufer();
    Verkaeufer(string name, char sex, unsigned int v_id);
    
    void print();
    Warenkorb einlesenWarenkorb(Artikel warenkorb[], int size);
    
    unsigned int getVID() const;
    
    void setVID(unsigned int v_id);
    
};


#endif /* verkaeufer_hpp */
