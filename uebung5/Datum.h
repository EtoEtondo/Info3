#ifndef _DATUM_
#define _DATUM_
#include <string>
#include <iostream>

using namespace std;

class Datum{
  private:
    unsigned int Tag = 0;
    unsigned int Monat = 0;
    unsigned int Jahr = 0;

  public:
    Datum();
    Datum(unsigned int a,unsigned int b,unsigned int c);
    ~Datum();
    void print();
    unsigned int getTag() const;
    unsigned int getMonat() const;
    unsigned int getJahr() const;
    void setDatum(unsigned int a,unsigned int b,unsigned int c);
    bool checkDatum(unsigned int a, unsigned int b, unsigned int c);
    string asString();
    bool isLeapYear();
};

#endif
