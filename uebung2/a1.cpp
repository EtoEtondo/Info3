#include <iostream>
#include <string>

using namespace std;

int replaceAll(string& x,const string& alt,const string& neu);

int main(){
  cout<<"A1"<<endl;

  string test("Cool");
  cout << "Alter Text:\n"<<test<<endl;

  int a= replaceAll(test, "cool", "super super schön");
  cout << "Neuer Text:\n"<<test<<endl;

  cout << "Es wurde/n "<< a << " Teilstring/s ersetzt."<<endl;

  return 0;
}


int replaceAll(string& x,const string& alt,const string& neu){
  int Altelng = alt.length();
  int Neuleng = neu.length();
  int pos = 0;
  int zahler = 0;

  while((pos = x.find(alt, pos)) != string::npos){
    x.replace(pos, Altelng, neu);
    pos += Neuleng;
    zahler++;
  }
  return zahler;
}
