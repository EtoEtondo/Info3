// ---------------------------------------------------
// kaufbeleg.hpp
// Erste Definition der Klasse Kaufbeleg.
// ---------------------------------------------------

#ifndef kaufbeleg_hpp
#define kaufbeleg_hpp

#include "warenkorb.hpp"
#include "verkaeufer.hpp"
#include "datum.hpp"
#include "uhrzeit.hpp"
#include "filiale.hpp"


class Kaufbeleg {
    
private:
    Filiale* filiale;               // Pointer auf Objekt von Filiale
    Warenkorb* warenkorb;           // Pointer auf Objekt von Warenkorb
    string zahlungsart = "BAR";     // string für Zahlungsart
    Verkaeufer* verkaeufer;         // Pointer auf Objekt von Verkaeufer
    short kassennummer = 0;         // short für Kassennummer
    short belegnummer = 0;          // short für Belegnummer
    Datum datum;                    // Objekt von Datum (gibt jetztiges Datum an; default-Konstruktor von Datum)
    Uhrzeit uhrzeit;                // Objekt von Uhrzeit (gibt jetztige Uhrzeit an; default-Konstruktor von Datum)
    
    short alter(Datum bday);        // HILFS - METHODEN FÜR DIE METHODEN DER KLASSE
    short maxfsk();                 // (SOLLEN NICHT ZUR Ö. SCHNITTSTELLE GEHÖREN)
    void strich();
    void dstrich();
    void printKaufbeleg(short alter);
    
public:
    Kaufbeleg();
    Kaufbeleg(Filiale* filiale, Warenkorb* warenkorb, Verkaeufer* verkaeufer, short& kassennummer, short& belegnummer);
    void print();
    bool altertest(Datum bday);
    void printKaufbeleg();
    Filiale* getFiliale();
    Warenkorb* getWarenkorb();
    string getZahlungsart() const;
    Verkaeufer* getVerkaeufer() const;
    short getKassennummer() const;
    short getBelegnummer()const;
    Datum getDatum() const;
    Uhrzeit getUhrzeit() const;
    
    void setFiliale(Filiale* f);
    void setWarenkorb(Warenkorb* w);
    void setZahlungsart(string z);
    void setVerkaeufer(Verkaeufer* v);
    void setKassennummer(short& k);
    void setBelegnummer(short& b);
    
};



#endif /* kaufbeleg_hpp */
