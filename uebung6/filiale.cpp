// ---------------------------------------------------
// filiale.cpp
// Implementierung der Methoden der Klasse Filiale.
// ---------------------------------------------------

#include "filiale.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// Konstruktor

Filiale::Filiale(string firma, string f_id, string adresse, unsigned int plz, string ort) {
    setFirma(firma);
    setFID(f_id);
    setAdresse(adresse);
    setPLZ(plz);
    setOrt(ort);
}



// print-Methode

void Filiale::print() {
    cout << setfill(' ') << setw(31-(int)(firma.size()/2)) << " " << getFirma() << endl;
    cout << setfill(' ') << setw(31-(int)((adresse.size()-1)/2)) << " " << getAdresse() << endl;
    cout << setfill(' ') << setw(30-((sizeof(plz)+(int)ort.size()+1)/2)) << " " << getPLZ() << " " << getOrt() << endl;
    cout << setfill(' ') << setw(30-(int)((f_id.size()-1)/2)) << " " << getFID() << endl;
}



// get-Methoden

string Filiale::getFirma() const {
    return firma;
}

string Filiale::getFID() const {
    return f_id;
}

string Filiale::getAdresse() const {
    return adresse;
}

unsigned int Filiale::getPLZ() const {
    return plz;
}

string Filiale::getOrt() const {
    return ort;
}



// set-Methoden

void Filiale::setFirma(string fn) {
    if(fn.size() >= 1) firma = fn;
}

void Filiale::setFID(string fi) {
    f_id = fi;
}

void Filiale::setAdresse(string adr) {
    if(adr.size() >= 1) adresse = adr;
}

void Filiale::setPLZ(unsigned int pl) {
    plz = pl;
}

void Filiale::setOrt(string loc) {
    if(loc.size() >= 1) ort = loc;
}
