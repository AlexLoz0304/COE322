//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ranges>
using namespace std;

int main () {
  int check = 1E4;
  auto nums = ranges::views::iota(2,check);
     ranges::for_each
     (nums,  [] (int i) {
      int total = 1;
      auto divisors = ranges::views::iota(2,i);
      ranges::for_each
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
