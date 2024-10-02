#include <iostream>
#include <vector>
#include <cmath>
#include <ranges>
#include <algorithm>
using namespace std;

float vecnorm(const vector<float> &nums) {
  float total = 0;

  ranges::for_each
    (nums, [&total] (float e){
      total += e*e;
    });
      
      
  float L = sqrt(total);

  return L;
}

int main () {

  vector<float> numbers = {1.2,2.4,4.5,9.123,34.62,23.12,35.64,12.64,2,3,5};
  float L = vecnorm(numbers);

  ranges::for_each
    (numbers, [L](float e){
      e = e/L;
      cout << e << "\n";
    });
  
  return 0;
}
