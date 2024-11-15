#include <iostream>
#include <cmath>

using namespace std;

int main() {

  for (int k = 0; k <= 10; k++){

    int n = pow(10,k);
    float e = 1;

    for (int i = 0; i <= n; i++){	
      e *= (1 + 1./n);
    }

    cout << "n = " << n << "  e = " << e << "\n";
  }

 return 0;
}
