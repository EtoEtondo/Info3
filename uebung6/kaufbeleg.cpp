// ---------------------------------------------------
// kaufbeleg.cpp
// Implementierung der Methoden der Klasse Kaufbeleg.
// ---------------------------------------------------

#include "kaufbeleg.hpp"

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;



// Hilfsfunktionen in private der Klasse
// gehoert nicht zur oeff. Schnittstelle

// Alter des Kunden wird ermittelt
short Kaufbeleg::alter(Datum bday) {
    Datum heute;
    short jahre = heute.getJahr() - bday.getJahr();
    short monate = heute.getMonat() - bday.getMonat();
    short tage = heute.getTag() - bday.getTag();
    if(jahre >= 0 && monate > 0)
        return jahre;
    else if(jahre >= 0 && monate == 0 && tage >= 0)
        return jahre;
    else if(jahre > 0 && monate == 0 && tage < 0)
        return jahre - 1;
    else if(jahre > 0 && monate < 0)
        return jahre -1;
    else
        return 0;
}

// Höchstes FSK des Warenkorbs wird ermittelt
short Kaufbeleg::maxfsk() {
    int i;
    short fsk = 0;
    for(i = 0; i < warenkorb->getAnzahl(); i++) {
        if(fsk == 18) break;
        if(warenkorb->getArtikel(i)->getFSK() > fsk)
            fsk = warenkorb->getArtikel(i)->getFSK();
    }
    return fsk;
}

// Setzt Linie mit 60 '-'
void Kaufbeleg::strich() {
    ios::fmtflags savedFlags = cout.flags();
    cout << setfill('-') << setw(60) << "-" << endl;
    cout.flags(savedFlags);
}

// Setzt Linie mit 60 '='
void Kaufbeleg::dstrich() {
    ios::fmtflags savedFlags = cout.flags();
    cout << setfill('=') << setw(60) << "=" << endl;
    cout.flags(savedFlags);
}

// printKaufbeleg-Methode
void Kaufbeleg::printKaufbeleg(short alter) {
    cout << "ZAHLUNGSART\n" << "\t1 - BARZAHLUNG\n" << "\t2 - KARTENZAHLUNG\n" << "\t3 - GUTSCHEIN\n\n";
    int eingabe = 0;
    do {
        cout << "NR: ";
        cin >> eingabe;
        if(eingabe == 1)
            setZahlungsart("BAR");
        if(eingabe == 2)
            setZahlungsart("KARTE");
        if(eingabe == 3)
            setZahlungsart("GUTSCHEIN");
    } while (eingabe != 1 && eingabe != 2 && eingabe != 3);
    cout << endl << "KAUFBELEG: [RETURN-TASTE FUER AUSDRUCK] ";
    cin.ignore();
    cin.ignore();
    cout << endl << endl;
    dstrich();
    filiale->print();
    dstrich();
    cout << left << getZahlungsart();
    cout << right << setfill(' ') << setw((60-((int)(getZahlungsart()).size()))+2);
    cout << "Preis €" << endl << endl;
    warenkorb->print(alter);
    dstrich();
    verkaeufer->print();
    cout << "Kasse:\t\t\t" << getKassennummer() << endl;
    cout << "Belegnummer:\t" << setfill('0') << setw(4) << getBelegnummer() << endl;
    strich();
    datum.print();
    cout << setfill(' ') << setw(60-10-8) << " ";
    uhrzeit.print();
    dstrich();
    cout << endl << endl;
}



// Konstruktoren

Kaufbeleg::Kaufbeleg() {}

Kaufbeleg::Kaufbeleg(Filiale* filiale, Warenkorb* warenkorb,
                     Verkaeufer* verkaeufer, short& kassennummer,
                     short& belegnummer) {
    setFiliale(filiale);
    setWarenkorb(warenkorb);
    setVerkaeufer(verkaeufer);
    setKassennummer(kassennummer);
    setBelegnummer(belegnummer);
}



// print-Methode

void Kaufbeleg::print() {
    
    short fsk = maxfsk();
    short tag, monat, jahr;
    
    if(fsk >= 16) {
        cout << "Es gibt Artikel die FSK" << fsk << " haben." << endl;
        cout << "Bitte Geben Sie das Geburtsdatum an!" << endl << endl;
        cout << "(DD.MM.JJJJ)" << endl;
        cout << "DD: ";
        cin >> tag;
        cout << "\n";
        cout << "MM: ";
        cin >> monat;
        cout << "\n";
        cout << "JJJJ: ";
        cin >> jahr;
        cout << "\n";
        cout << "(";
        Datum bday(tag, monat, jahr);
        bday.print();
        cout << ")  =>  " << alter(bday) << " Jahre alt" << endl;
        
        if(altertest(bday)) {
            cout << endl << "Kunde erfuellt gewüschtes Alter.\nKaufbeleg wird vollständig gedruckt!" << endl << endl;
        }
        else{
            cout << endl << "Kunde erfuellt nicht gewuenschtes Alter.\nKaufbeleg enthält nur Artikel mit pass-\nender FSK!" << endl <<endl;
        }
        printKaufbeleg(alter(bday));
    }
    else{
        printKaufbeleg(1);     // solange größer als 0 wird Kaufbeleg ausgegeben
    }
    
}



// Alterstest für FSK

bool Kaufbeleg::altertest(Datum bday) {
    short alter = this->alter(bday);
    short fsk = maxfsk();
    // Alter und FSK vergleichen und true oder false returnen
    if(alter >= fsk) return true;
    else return false;
}



// get-Methoden

Filiale* Kaufbeleg::getFiliale() {
    return filiale;
}

Warenkorb* Kaufbeleg::getWarenkorb() {
    return warenkorb;
}

string Kaufbeleg::getZahlungsart() const {
    return zahlungsart;
}

Verkaeufer* Kaufbeleg::getVerkaeufer() const {
    return verkaeufer;
}

short Kaufbeleg::getKassennummer() const {
    return kassennummer;
}

short Kaufbeleg::getBelegnummer() const {
    return belegnummer;
}

Datum Kaufbeleg::getDatum() const {
    return datum;
}

Uhrzeit Kaufbeleg::getUhrzeit() const {
    return uhrzeit;
}



// set-Methoden

void Kaufbeleg::setFiliale(Filiale* f) {
    filiale = f;
}

void Kaufbeleg::setWarenkorb(Warenkorb* w) {
    warenkorb = w;
}

void Kaufbeleg::setZahlungsart(string z) {
    zahlungsart = z;
}

void Kaufbeleg::setVerkaeufer(Verkaeufer* v) {
    verkaeufer = v;
}

void Kaufbeleg::setKassennummer(short& k) {
    kassennummer = k;
}

void Kaufbeleg::setBelegnummer(short& b) {
    belegnummer = b;
}

