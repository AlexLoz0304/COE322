#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float vecnorm(vector<float> nums) {
  float total = 0;
  for (float e: nums)
    total += e * e;
  
  float L = sqrt(total);

  return L;
}

int main () {

  vector<float> numbers = {1,2,3,5};
  float L = vecnorm(numbers);

  for (float e: numbers){
      e = e/L;
      cout << e << "\n";
  }
  
  return 0;
}
