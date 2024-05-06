// ---------------------------------------------------
// filiale.hpp
// Definition einer einfachen Klasse Filiale.
// ---------------------------------------------------

#ifndef filiale_hpp
#define filiale_hpp

#include <iostream>

using namespace std;


class Filiale {
    
private:
    string firma = "noname";        // Firmenname
    string f_id = "noid";           // Firmen-ID
    string adresse = "noadress";    // Firmenadresse
    unsigned int plz = 0;           // Firmen-PLZ
    string ort = "nolocation";      // Firmenort
    
public:
    Filiale(string firma, string f_id, string adresse, unsigned int plz, string ort);
    void print();
    
    string getFirma() const;
    string getFID() const;
    string getAdresse() const;
    unsigned int getPLZ() const;
    string getOrt() const;
    
    void setFirma(string fn);
    void setFID(string fi);
    void setAdresse(string adr);
    void setPLZ(unsigned int pl);
    void setOrt(string loc);
    
};


#endif /* filiale_hpp */
