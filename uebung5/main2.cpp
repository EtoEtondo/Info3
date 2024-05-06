#include "Datum.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
cout<<"A2"<<endl;
cout<<"--------------------------"<<endl;

Datum geburtstag(28, 12, 1997);
geburtstag.print();

cout<<"--------------------------"<<endl;
Datum History;
History.setDatum(12,5,1451);
History.print();

cout<<"--------------------------"<<endl;
Datum naechsterTag(30,11,2018);
string p = naechsterTag.asString();
cout<<p<<endl;

return 0;
}
