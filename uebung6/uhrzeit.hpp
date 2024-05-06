// ---------------------------------------------------
// uhrzeit.hpp
// Erste Definition der Klasse Uhrzeit.
// ---------------------------------------------------

#ifndef uhrzeit_hpp
#define uhrzeit_hpp


class Uhrzeit {
    
private:
    unsigned short stunde = 0;      // Stunde
    unsigned short minute = 0;      // Minute
    unsigned short sekunde = 0;     // Sekunde
    
public:
    Uhrzeit();
    Uhrzeit(unsigned short h, unsigned short min, unsigned short s);
    void print();
    
    unsigned short getStunde() const;
    unsigned short getMinute() const;
    unsigned short getSekunde() const;
    
};


#endif /* uhrzeit_hpp */
