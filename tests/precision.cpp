#include <iostream>
using namespace std;

template <typename mytype>
  mytype epsilon() {
  auto one = static_cast<mytype>(1);
    mytype guess = one;
    while (1 + guess > one){
      guess /= static_cast<mytype>(2);
    }
    return guess;
  }

int main() {
  float ef = epsilon<float>();
  double ed = epsilon<double>();
  cout << ef << "\n" << ed << "\n";
  return 0;
}
