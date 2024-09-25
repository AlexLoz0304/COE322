#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> numbers(10);
  for (int i = 1; i <= 100000; i++) {
    numbers[i] = i;
    cout << numbers[i]  << "\n";
  } 
 
  return 0;
}
