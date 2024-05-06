// ---------------------------------------------------
// datum.cpp
// Implementierung der Methoden der Klasse Datum.
// ---------------------------------------------------

#include "datum.hpp"

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;



// Hilfsfunktion

bool checkDatum(int d, int m, int y) {
    if(m <= 12 && m > 0 && d <= 31 && d > 0) {
        if(m == 2) {
            if(y % 4 == 0) {
                if(d <= 29) return true;
                else return false;
            }else{
                if(d <= 28) return true;
                else return false;
            }
        }else return true;
    }else return false;
}


// heutige Datum erzeugen

Datum::Datum() {            // Aktuelles Datum holen und
    // den Datenelementen zuweisen.
    struct tm *zeit;         // Zeiger auf Struktur tm.
    time_t sec;              // Für die Sekunden.
    
    time(&sec);              // Aktuelle Zeit holen.
    zeit = localtime(&sec);  // Eine Struktur vom Typ tm
    // initialisieren und Zeiger
    // darauf zurueckgeben.
    tag   = (short) zeit->tm_mday;
    monat = (short) zeit->tm_mon + 1;
    jahr  = (short) zeit->tm_year + 1900;
}


// gewünschtes Datum erzeugen

Datum::Datum( int t, int m, int j) {
    if(checkDatum(t, m, j)) {
        tag   = (short) t;
        monat = (short) m;
        jahr  = (short) j;
    }
}



// print-Methode

void Datum::print(void) {   // Datum anzeigen
    cout << setfill('0') << setw(2) << tag << '.'
    << setfill('0') << setw(2) << monat << '.'
    << setfill('0') << setw(4)<< jahr;
}



// get-Methoden

short Datum::getTag() const {
    return tag;
}

short Datum::getMonat() const {
    return monat;
}

short Datum::getJahr() const {
    return jahr;
}

