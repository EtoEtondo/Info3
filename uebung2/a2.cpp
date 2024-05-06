#include <iostream>
#include <string>
#include "random.h"
#include <ctime>
#include <cmath>
#include <limits>

using namespace std;
using namespace randomize;

int main(){
int i;

for(i=0;i<20;i++){
  cout<<i+1<<". Ganzzahl: "<< randInt()<<endl;
}

cout<<"-----------------------------"<<endl;

for(i=0;i<20;i++){
  cout<<i+1<<". Kommazahl: "<< randDouble()<<endl;
}

  return 0;
}
