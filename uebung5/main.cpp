#include "Artikel.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
cout<<"A1"<<endl;
cout<<"--------------------------"<<endl;

Artikel pc(1234, "PC", 999.99);
pc.artikelprint();

cout<<"--------------------------"<<endl;
Artikel artikelo;
artikelo.setArtikelname("Smartphone");
artikelo.setArtikelnummer(5678);
artikelo.setVerksaufspreis(879.00);
artikelo.artikelprint();

cout<<"--------------------------"<<endl;
Artikel hose(7638, "Hose", 49.99);
cout<<hose.getArtikelname() <<endl<<hose.getArtikelnummer() <<endl<<hose.getVerksaufspreis() <<endl;

return 0;
}
