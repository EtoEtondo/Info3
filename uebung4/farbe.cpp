#include "farbe.h"
#include <string>
#include <iostream>

using namespace std;

bool RGB_FARBE::auswahlFarbe(){
  int r=0, g=0, b=0;
  cout<<"Rot/Grün/Blau-Farbanteil eingeben:"<<endl;

  cout<<"Rot(0-255):";
  cin>>r;
  if(r<0 || r>255) return -1;

  cout<<"Grün(0-255):";
  cin>>g;
  if(g<0 || g>255) return -1;

  cout<<"Blau(0-255):";
  cin>>b;
  if(b<0 || b>255) return -1;

  rot=r;
  gruen=g;
  blau=b;
}

void RGB_FARBE::anzeigen() const{
  cout<<"(Rot: "<<rot<<", Grün: "<<gruen<<", Blau: "<<blau<<")"<<endl;
}
