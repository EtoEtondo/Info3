// ---------------------------------------------------
// warenkorb.hpp
// Definition einer einfachen Klasse Warenkorb.
// ---------------------------------------------------

#ifndef warenkorb_hpp
#define warenkorb_hpp

#include "artikel.hpp"


enum {MAX=1000};

class Warenkorb {
    
private:
    Artikel** warenkorb;        // Zeiger auf reservierten Speicherplatz
    unsigned short anz = 0;     // Anzahl der Artikel im Warenkorb
    double netto = 0;           // Nettobetrag
    double brutto = 0;          // Bruttobetrag
    double ant_m7 = 0;          // Anteil der MWSt mit 7%
    double ant_m19 = 0;         // Anteil der MWSt mit 19%
    
public:
    Warenkorb();
    ~Warenkorb();
    void print(short alter);
    
    Artikel* getArtikel(unsigned short nr);
    unsigned short getAnzahl() const;
    double getNetto() const;
    double getBrutto() const;
    double getAntM7() const;
    double getAntM19() const;
    
    void putArtikel(Artikel* a);
    void setWarenkorb(Artikel warenkorb[], int size);
    
};


#endif /* warenkorb_hpp */

