// ---------------------------------------------------
// artikel.cpp
// Implementierung der Methoden der Klasse Artikel.
// ---------------------------------------------------

#include "artikel.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// Definition des Konstruktors und Destruktors:

Artikel::Artikel() {}

Artikel::Artikel(long nr, const string& name, double vk, short fsk, double mwst) {
    setNr(nr);
    setName(name);
    setVK(vk);
    setFSK(fsk);
    setMWSt(mwst);
}

Artikel::~Artikel() {}



// Die Methode print() zeigt einen Artikel am Bildschirm an.

void Artikel::print() {
    string ma = "inkl";
    if(getMWSt() == 0.19) ma = "inkl. 0.19% MwSt";
    if(getMWSt() == 0.07) ma = "inkl. 0.07% MwSt";
    cout << left << getName() << setfill(' ') << setw((45-((int)name.size())-2));
    cout << right << fixed << setprecision(2) << getVK() << " " << ma << endl;
    cout << getNr() << endl << endl;
}



// get-Methoden

const string& Artikel::getName() const {
    return name;
    
}

long Artikel::getNr() const {
    return nr;
}

double Artikel::getVK() const {
    return vk;
}

short Artikel::getFSK() const {
    return fsk;
}

double Artikel::getMWSt() const {
    return mwst;
    
}



// set-Methoden

bool Artikel::setName(const string& s) {
    if( s.size() < 1)   // Kein leerer Name
        return false;
    name = s;
    return true;
}

void Artikel::setNr(long n) {
    nr = n;
    
}

void Artikel::setVK(double v) {
    vk = v > 0.0 ? v : 0.0; // Kein negativer Preis
}

void Artikel::setFSK(short f) {
    if(f==18 || f==16)
        fsk = f;
    else fsk = 0;
}

void Artikel::setMWSt(double m) {
    if(m == 0.07 || m == 0.19) mwst = m;
    else mwst = 0.19;
}

 
