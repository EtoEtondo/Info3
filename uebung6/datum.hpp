// ---------------------------------------------------
// datum.hpp
// Erste Definition der Klasse Datum.
// ---------------------------------------------------

#ifndef datum_hpp
#define datum_hpp


class Datum {
    
private:
    short tag = 1;
    short monat = 1;
    short jahr = 1970;
    
public:
    Datum();
    Datum(int tag, int monat, int jahr);
    void print(void);
    
    short getTag() const;
    short getMonat() const;
    short getJahr() const;
    
};


#endif /* datum_hpp */


