//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <functional>
#include <complex>
using namespace std;
using std::complex;

template <typename T>
T f(T x,T r){
  return x * x - r;
}

template <typename T>
T fprime(T x){
  return x * static_cast<T>(2);
}

template <typename T>
T newton_root ( T r ) {
  T x = static_cast<T>(10);
  T funcval = fprime(x);
  int i = 0;

  while (std::abs(funcval) > 1.e-10 && i < 10) {

    x = x - (f(x,r)/fprime(x));
    funcval = f(x,r);
    cout << "Funciton is "<< x << "at " << funcval << "\n";
    i ++;
  }
  cout << "It took " << i << " iterations" << "\n";
  return x;
}


int main() {

  auto root = newton_root<float>( 2.0f );
  cout << root << "\n";
  auto root2 = newton_root<double> ( 2.0 );
  cout << root2 << "\n";
  auto root3 = newton_root<complex<double>> ( 2.0+2.i );
  cout << root3 << "\n";
  
  
  return 0;
}



