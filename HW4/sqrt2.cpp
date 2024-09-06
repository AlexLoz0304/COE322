//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
using namespace std;

double fx(double x){

  return (x * x) - 2;
}

double deriv(double x){

  return 2 * x;
}


int main() {
  
  double  x = 2;
  double funcval = fx(x);
  int i = 0;
  while (abs(funcval) > 1.e-8 && i < 100) {

    x = x - (fx(x)/deriv(x));
    funcval = fx(x);
    cout << "Funciton is "<< x << "at " << fx(x) << "\n";
    i ++;
  }
  cout << "It took " << i << " iterations" << "\n";
  return 0;
}
