// ---------------------------------------------------
// warenkorb.cpp
// Implementierung der Methoden der Klasse Warenkorb.
// ---------------------------------------------------

#include "warenkorb.hpp"

#include <iostream>
#include <iomanip>

using namespace std;



// Konstruktor: reserviert Speicherplatz für 1000 Artikel
// im Warenkorb

Warenkorb::Warenkorb() {
    warenkorb = new Artikel* [MAX];
}


// Destruktor: gibt den reservierten Speicherplatz wieder
// frei

Warenkorb::~Warenkorb() {
    delete warenkorb;
}


// print-Methode

void Warenkorb::print(short alter) {
    int i;
    for(i = 0; i < getAnzahl(); i++) {
        if(getArtikel(i)->getFSK() > alter) {
            brutto -= getArtikel(i)->getVK();
            netto -= getArtikel(i)->getVK() * (1 - getArtikel(i)->getMWSt());
            if(getArtikel(i)->getMWSt() == 0.19)
                ant_m19 -= getArtikel(i)->getVK() * getArtikel(i)->getMWSt();
            else if(getArtikel(i)->getMWSt() == 0.07)
                ant_m7 -= getArtikel(i)->getVK() * getArtikel(i)->getMWSt();
            continue;
        }
        getArtikel(i)->print();
    }
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << "Brutto" << setfill(' ') << setw(60-6-2) << right << fixed << setprecision(2) << getBrutto() << endl;
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << "Netto" << setfill(' ') << setw(60-5-2) << right << getNetto() << endl
    << "inkl. 19,00% MWSt." << setfill(' ') << setw(43-1-2) << right << getAntM19() <<  endl
    << "inkl.  7,00% MWSt." << setfill(' ') << setw(43-1-2) << right << getAntM7() <<  endl;
}


// get-Methoden

Artikel* Warenkorb::getArtikel(unsigned short nr) {
    return warenkorb[nr];
}

unsigned short Warenkorb::getAnzahl() const {
    return anz;
}

double Warenkorb::getNetto() const {
    return netto;
}

double Warenkorb::getBrutto() const {
    return brutto;
}

double Warenkorb::getAntM7() const {
    return ant_m7;
}

double Warenkorb::getAntM19() const {
    return ant_m19;
}



// put-Methode: legt Artikel in den Warenkorb
// und berechnet dabei Brutto-, Netto-, und
// MWSt.-Anteil der Preise

void Warenkorb::putArtikel(Artikel* a) {
    warenkorb[anz++] = a;
    brutto += a->getVK();
    netto += a->getVK() * (1 - a->getMWSt());
    if(a->getMWSt() == 0.19)
        ant_m19 += a->getVK() * a->getMWSt();
    else if(a->getMWSt() == 0.07)
        ant_m7 += a->getVK() * a->getMWSt();
}


// set-Methode: füllt Warenkorb mit Artikeln
// aus Artikel-Array

void Warenkorb::setWarenkorb(Artikel warenkorb[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        putArtikel(&warenkorb[i]);
    }
}
