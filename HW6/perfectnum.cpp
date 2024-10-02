//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ranges>
using namespace std;
namespace rng = std::ranges;

int main () {
  int check = 1E4;
  auto nums = rng::views::iota(2,check);
     rng::for_each
     (nums,  [] (int i) {
      int total = 1;
      auto divisors = rng::views::iota(2,i);
      rng::for_each
      (divisors, [&total,i] (int j){
	if (i % j == 0){
	  total +=  j;
	}
      });
      if ( i == total ) {
	cout << i << " is a perfect number" << "\n";
      }
     });
  return 0;
}
