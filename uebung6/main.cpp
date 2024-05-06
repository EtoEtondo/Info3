#include "kaufbeleg.hpp"

#include "filiale.hpp"
#include "artikel.hpp"
#include "warenkorb.hpp"
#include "verkaeufer.hpp"
#include "kunde.hpp"
#include "datum.hpp"
#include "uhrzeit.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
    
    Datum bday(16, 5, 1996);
    
    Kunde onur("Team 7", 'm', bday);
    
    Verkaeufer ulrike("Ulrike Still", 'w', 4821);
    
    Filiale saturn("Saturn", "DE-3851239", "Tauentzienstraße 9", 10789, "Berlin");
    
    Artikel warenkorb_temp[] {
        Artikel(1208110590,     "LG Smart-Tv", 1499.99,  0, 0.19),
        Artikel(8390419288,       "Iphone XS", 1149.99,  0, 0.19),
        Artikel(1467832847,       "Nespresso",    10.99,  0, 0.07),
        Artikel(1905043902,          "Nestle",    5.99,  0, 0.07),
        Artikel(1241249902,         "Fifa 19",   59.99, 18, 0.19),
        Artikel(1432349093,   "Playstation 4",  349.99,  0, 0.19),
        Artikel(1643738293,     "CD - Player",   12.99, 16, 0.19),
        Artikel(1429593182,     "CD - Huelle",    2.29,  0, 0.19),
        Artikel(1658354142,            "iPad",  849.90,  0, 0.19),
        Artikel(1745387179,      "Samsung S9", 699.99,  0, 0.19),
        Artikel(1845202126,     "Staubsauger",  199.99,  0, 0.19)
    };
    
    int size_warenkorb = sizeof(warenkorb_temp)/sizeof(Artikel);
   
    
    Warenkorb warenkorb = ulrike.einlesenWarenkorb(warenkorb_temp, size_warenkorb);
    
    short kn = 8;
    short bn = 567;
    
    Kaufbeleg quittung(&saturn, &warenkorb, &ulrike, kn, bn);
    
    quittung.print();
    
    return 0;
    
}
