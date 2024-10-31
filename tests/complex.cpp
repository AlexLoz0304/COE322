#include <complex>
#include <iostream>
using namespace std;
using std::complex;


  template <typename T>
  complex<T> equation(){
    complex<T> f1(.5,1.);
    complex<T> f2(0,2*3.14159);
    auto f3 = conj(f1);
    
    return f1 + f3 - exp(f2);
  }

int main() {
  
  complex<float> f = equation<float>();
  cout << f << "\n";
  complex<double> d = equation<double>();
  cout << d << "\n";
  return 0;
}
