#include "Artikel.h"
#include <string>
#include <iostream>

using namespace std;

Artikel::Artikel(){};
Artikel::Artikel(int a, string b, double c){
  Artikelnummer=a;
  Artikelname=b;
  Verkaufspreis=c;
};

Artikel::~Artikel(){};

int Artikel::getArtikelnummer() const{
  return Artikelnummer;
}

string Artikel::getArtikelname() const{
  return Artikelname;
}

double Artikel::getVerksaufspreis() const{
  return Verkaufspreis;
}

void Artikel::setArtikelnummer(int a){
  Artikelnummer=a;
}

void Artikel::setArtikelname(string b){
  Artikelname=b;
}

void Artikel::setVerksaufspreis(double c){
  Verkaufspreis=c;
}

void Artikel::artikelprint(){
  cout<<"Artikelnummer: "<<getArtikelnummer()<<endl;
  cout<<"Artikelname: "<<getArtikelname()<<endl;
  cout<<"Preis: "<<getVerksaufspreis()<<endl;
}
