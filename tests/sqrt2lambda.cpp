//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
using namespace std;


int main() {

  auto f = [] (double x) { return (x * x) - 2;}
  auto fprime = [] (double x) { return 2 * x;}
  
  double  x = 100;
  double funcval = fprime(x);
  int i = 0;

  while (abs(funcval) > 1.e-8 && i < 100) {

    x = x - (f(x)/fprime(x));
    funcval = f(x);
    cout << "Funciton is "<< x << "at " << f(x) << "\n";
    i ++;
  }
  cout << "It took " << i << " iterations" << "\n";
  return 0;
}
