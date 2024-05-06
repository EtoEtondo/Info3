// ---------------------------------------------------
// artikel.hpp
// Definition einer einfachen Klasse Artikel.
// ---------------------------------------------------

#ifndef artikel_hpp
#define artikel_hpp

#include <iostream>

using namespace std;

class Artikel {
    
private:
    long nr = 0;                // Artikelnummer
    string name = "noname";     // Artikelname
    double vk = 0.0;            // Verkaufspreis
    short fsk = 0;              // FSK
    double mwst = 0.19;         // MWSt
    
public:
    Artikel();
    Artikel(long nr, const string& name, double vk, short fsk, double mwst);
    ~Artikel();
    void print();
    
    const string& getName() const;
    long getNr() const;
    double getVK() const;
    short getFSK() const;
    double getMWSt() const;
    
    bool setName(const string& s);
    void setNr(long n);
    void setVK(double v);
    void setFSK(short f);
    void setMWSt(double m);
    
};


#endif //artikel_hpp
