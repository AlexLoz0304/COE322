//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <functional>
using namespace std;

double newton_root ( function< double(double) > f, function< double(double) > fprime ) {
  
  double  x = 100;
  double funcval = fprime(x);
  int i = 0;

  while (abs(funcval) > 1.e-8 && i < 100) {

    x = x - (f(x)/fprime(x));
    funcval = f(x);
    i ++;
  }
  cout << "It took " << i << " iterations" << "\n";
  return x;
 }

 double newton_root ( function< double(double) > f ) {
  
  auto fprime  = [f] ( double x) { return (f(x + 1e-6) - f(x))/1e-6;};

  return newton_root(f,fprime);
 }


int main() {

  for (int n=2; n <=8; ++n) {
    auto f = [n] (double x) { return (x * x) - n;};
    auto fprime = [] (double x) { return 2 * x;};
    cout << "sqrt(" << n << ") = " << newton_root(f,fprime) << "\n";

  }

  double n;
  cout << "Please enter a number you'd like to take a square root of" << "\n";
  cin >> n;

  auto f = [n] (double x) { return (x * x) - n;};

  double root = newton_root( f );
  cout << "The root of the number is " << root << "\n";

  
  
  return 0;
}


