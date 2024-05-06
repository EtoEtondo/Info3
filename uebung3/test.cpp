#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

namespace TOOL1{
	#include "tool1.h"
}

namespace TOOL2{
	#include "tool2.h"
}
using namespace std;

int main(){
  std::cout << "A3" << '\n';
  double a, b;
  cout << "Geben Sie eine Zahl ein: ";
  cin >> a;
  cout << "Geben Sie eine weitere Zahl ein: ";
  cin >> b;

  cout << "Lösung Tool1" << endl;
  cout << TOOL1::calculate(a,b) <<endl;

  cout << "Lösung Tool2" << endl;
  cout << TOOL2::calculate(a,b) <<endl;
}
