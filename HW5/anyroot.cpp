//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <functional>
using namespace std;
<<<<<<< HEAD
 
double newton_root ( function< double(double) > f){

    double h = 1e-6;

    auto fprime = [h] (function< double(double) > f, double x) { return (f(x + h) - f(x))/h;};

    return newton_root(f,fprime);

}

double newton_root ( function< double(double) > f,
		     function< double(function <double(double) > f,double) > fprime ) {
=======

double newton_root ( function< double(double) > f, function< double(double) > fprime ) {
>>>>>>> 24814b60caeb20d2eb71d9a963f395f52789537a
  
  double  x = 1000;
  double funcval = fprime(f,x);
  int i = 0;

  while (abs(funcval) > 1.e-8 && i < 100) {

    x = x - (f(x)/fprime(f,x));
    funcval = f(x);
    i ++;
  }
  return x;
 }

double newton_root ( function< double(double) > f){

    double h = 1e-6;

    auto fprime = [h] (function< double(double) > f, double x) { return (f(x + h) - f(x))/h};

    return newton_root(f,fprime)

}


int main() {

    double n;
    cout << "Please enter a number you'd like to take a square root of" << "\n";
    cin >> n;

  auto f = [n] (double x) { return (x * x) - n;};

  double root = newton_root( f );
  cout << root << "\n";
  
  return 0;
}
