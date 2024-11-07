//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <functional>
#include <complex>
using namespace std;
using std::complex;

complex<double> newton_root
( function< complex<double>(complex<double>) > f, function< complex<double>(complex<double>) > fprime ) {
  
  complex<double>  x (10.,10.);
  complex<double> funcval = fprime(x);
  int i = 0;

  while (std::abs(funcval) > 1.e-8 && i < 10000) {

    x = x - (f(x)/fprime(x));
    funcval = f(x);
    cout << "Funciton is "<< x << "at " << f(x) << "\n";
    i ++;
  }
  cout << "It took " << i << " iterations" << "\n";
  return x;
 }


complex<double> f(complex<double> x){
  return x * x - static_cast<complex<double>>(2);
}

complex<double> fprime(complex<double> x){
  return x * static_cast<complex<double>>(2);
}


int main() {

  complex<double> root = newton_root( f,fprime );
  cout << root << "\n";
  
  return 0;
}



