
#include <iostream>
using namespace std;

int main() {
  int i;
  cin >> i;

  if ( (i % 3 == 0) and (i % 5 == 0) )
    cout << "FizzBuzz" << "\n";
  else if ( i % 3 == 0 )
    cout << "Fizz" << "\n";
  else if ( i % 5 == 0 )
    cout << "Buzz" << "\n";
  
  return 0;
}
