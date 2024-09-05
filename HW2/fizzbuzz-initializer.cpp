//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
using namespace std;

float read_number(){
  float i;
  cin >> i;
  return i;
}

int main() {

  if ( int i = read_number(); i % 3 == 0 and i % 5 == 0 )
    cout << "FizzBuzz!" << "\n";
  else if ( i % 3 == 0 )
    cout << "Fizz!" << "\n";
  else if ( i % 5 == 0 )
    cout << "Buzz!" << "\n";
 
  return 0;
}
