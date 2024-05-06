// ---------------------------------------------------
// uhrzeit.cpp
// Implementierung der Methoden der Klasse Uhrzeit.
// ---------------------------------------------------

#include "uhrzeit.hpp"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;



// Konstruktoren

Uhrzeit::Uhrzeit() {
    time_t sec;
    time(&sec);
    tm* zeit = localtime(&sec);
    stunde = (unsigned short) zeit->tm_hour;
    minute = (unsigned short) zeit->tm_min;
    sekunde = (unsigned short) zeit->tm_sec;
}

Uhrzeit::Uhrzeit(unsigned short h, unsigned short min, unsigned short s) {
    if(h >= 0 && h < 24) stunde = h;
    else stunde = 0;
    if(min >= 0 && min < 60) minute = min;
    else minute = 0;
    if(s >= 0 && s < 60) sekunde = s;
    else sekunde = 0;
}



// print-Methode

void Uhrzeit::print() {
    cout << right << setfill('0') << setw(2) << stunde << ":"
    << setfill('0') << setw(2) << minute << ":"
    << setfill('0') << setw(2) << sekunde << endl;
}



// get-Methoden

unsigned short Uhrzeit::getStunde() const {
    return stunde;
}

unsigned short Uhrzeit::getMinute() const {
    return minute;
}

unsigned short Uhrzeit::getSekunde() const {
    return sekunde;
}
