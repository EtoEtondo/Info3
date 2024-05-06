#include <iostream>
#include <string>
#include "random.h"
#include <ctime>
#include <cmath>
#include <limits>

using namespace std;

namespace randomize{

static int a = 1448;
static int b = 95641;
static int c = 456123;

int randInt(){
  static int zufall = (int)time(0);
  zufall = (a*zufall+b)%c;
  return zufall;
}

double randDouble(){
  return (double)abs(randInt())/numeric_limits<int>::max();
}

}
