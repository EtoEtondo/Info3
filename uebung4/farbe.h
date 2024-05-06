#ifndef _RGB_FARBE_
#define _RGB_FARBE_
#include <string>


class RGB_FARBE{
  private:
    int rot=0, gruen=0, blau=0;

  public:
    RGB_FARBE(){}
    RGB_FARBE(int r, int g, int b) {setFarbe(r,g,b);}

    inline void setFarbe(int r, int g, int b)
    {rot=r; gruen=g; blau=b;}

    inline int getR() const {return rot;}
    inline int getG() const {return gruen;}
    inline int getB() const {return blau;}

    void anzeigen() const;
    bool auswahlFarbe();
};

#endif
