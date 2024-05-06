#include "Datum.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Datum::Datum(){};
Datum::Datum(unsigned int a,unsigned int b,unsigned int c){
  Tag=a;
  Monat=b;
  Jahr=c;
};

Datum::~Datum(){};

unsigned int Datum::getTag() const{
  return Tag;
}

unsigned int Datum::getMonat() const{
  return Monat;
}

unsigned int Datum::getJahr() const{
  return Jahr;
}

void Datum::setDatum(unsigned int a,unsigned int b,unsigned int c){
  checkDatum(a,b,c);
  Tag=a;
  Monat=b;
  Jahr=c;
}

bool Datum::checkDatum(unsigned int a, unsigned int b, unsigned int c) {
    if(b <= 12 && b > 0 && a <= 31 && a > 0) {
        if(b == 2) {
            if(c % 4 == 0) {
                if(a <= 29) return true;
                else return false;
            }else{
                if(a <= 28) return true;
                else return false;
            }
        }else return true;
    }else return false;
}

string Datum::asString(){
  string d, m, y, s;
  d = to_string(Tag);
  m = to_string(Monat);
  y = to_string(Jahr);
  s = d+"."+m+"."+y;
  return s;
}

bool Datum::isLeapYear(){
  if(Jahr%4==0){
    return true;
  }
  else{
    return false;
  }
}

void Datum::print(){
  cout<<Tag<<"."<<Monat<<"."<<Jahr<<endl;
}
