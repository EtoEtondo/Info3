// ---------------------------------------------------
// kunde.cpp
// Implementierung der Methoden der Klasse Kunde.
// ---------------------------------------------------

#include "kunde.hpp"

#include <iostream>

using namespace std;



// Konstruktoren

Kunde::Kunde() {}

Kunde::Kunde(string name, char sex, Datum bday) {
    setName(name);
    setSex(sex);
    setAlter(bday);
}



// get-Methoden

short Kunde::getAlter() const {
    return alter;
}



// set-Methoden

void Kunde::setAlter(Datum bday) {
    Datum heute;
    short jahre = heute.getJahr() - bday.getJahr();
    short monate = heute.getMonat() - bday.getMonat();
    short tage = heute.getTag() - bday.getTag();
    if(jahre >= 0 && monate > 0)
        alter = jahre;
    else if(jahre >= 0 && monate == 0 && tage >= 0)
        alter = jahre;
    else if(jahre > 0 && monate == 0 && tage < 0)
        alter = jahre - 1;
    else if(jahre > 0 && monate < 0)
        alter = jahre -1;
    else
        alter = 0;
}
