#ifndef _ARTIKEL_
#define _ARTIKEL_
#include <string>
#include <iostream>

using namespace std;

class Artikel{
  private:
    int Artikelnummer = 0;
    string Artikelname = "0";
    double Verkaufspreis = 0.0;

  public:
    Artikel();
    Artikel(int a, string b, double c);
    ~Artikel();
    void artikelprint();
    int getArtikelnummer() const;
    string getArtikelname() const;
    double getVerksaufspreis() const;
    void setArtikelnummer(int a);
    void setArtikelname(string b);
    void setVerksaufspreis(double c);
};

#endif
