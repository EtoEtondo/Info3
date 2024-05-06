#include "farbe.h"
#include <iostream>

using namespace std;

int main(){
  cout<<"AB4"<<endl;
  RGB_FARBE cyan(0,255,255), gelb(255,255,0), magenta(255,0,255);

  cout<<"Farbe Cyan:"<<endl;
  cyan.anzeigen();
  cout<<"Farbe Gelb:"<<endl;
  gelb.anzeigen();
  cout<<"Farbe Magenta:"<<endl;
  magenta.anzeigen();

  cout<<"--------------------------------------------"<<endl;
  cout<<"Set in der Main: "<<endl;
  RGB_FARBE wahl;
  wahl.setFarbe(255,255,15);
  wahl.anzeigen();

  cout<<"--------------------------------------------"<<endl;
  cout<<"Eigene Farbe eingeben: "<<endl;
  RGB_FARBE eingabe;
  eingabe.auswahlFarbe();
  eingabe.anzeigen();

  return 0;
}
