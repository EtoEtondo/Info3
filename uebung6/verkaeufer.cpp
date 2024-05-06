// ---------------------------------------------------
// verkaeufer.cpp
// Implementierung der Methoden der Klasse Verkaeufer.
// ---------------------------------------------------

#include "verkaeufer.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// Konstrukteren

Verkaeufer::Verkaeufer() {}

Verkaeufer::Verkaeufer(string name, char sex, unsigned int v_id) {
    setName(name);
    setSex(sex);
    setVID(v_id);
}



// print-Methode der Klasse Verkaeufer

void Verkaeufer::print() {
    cout << "Bediener:\t\t" << getName() << endl;
    cout << "Bed.-ID:\t\t" << getVID() << endl;
}



// einlesenWarenkorb-Methode

Warenkorb Verkaeufer::einlesenWarenkorb(Artikel warenkorb[], int size) {
    Warenkorb w;
    w.setWarenkorb(warenkorb, size);
    cout << setfill(' ') << setw(10) << " " << "EINLESEN DER ARTIKEL" << endl << endl;
    for(int i = 0; i < size; i++) {
        cout << setfill('-') << setw(41) << "-" << endl;
        cout << left << " " << w.getArtikel(i)->getName() << setfill(' ') << setw((40-((int)w.getArtikel(i)->getName().size())-2));
        cout << right << fixed << setprecision(2) << w.getArtikel(i)->getVK() << "€" << endl;
        cout << left << " " << w.getArtikel(i)->getNr() << setfill(' ') << setw((40-sizeof(w.getArtikel(i)->getNr())-4));
        cout << right << "[WEITER MIT RETURN]";
        cin.ignore();
    }
    cout << setfill('-') << setw(41) << "-" << endl << endl;
    return w;
}



// get-Methoden

unsigned int Verkaeufer::getVID() const {
    return v_id;
}



// set-Methoden

void Verkaeufer::setVID(unsigned int vi) {
    v_id = vi;
}
