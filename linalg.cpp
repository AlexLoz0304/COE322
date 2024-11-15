//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <vector>
using namespace std;

class Matrix {

private:
  vector<int> matrix; //templatize??
  int m,n; // m rows n columns
public:
  storage(int m,int n) : m(m),n(n),matrix(m * n) {}; // starts at (0,0)
  
  void set(int i, int j, int v) {
    matrix.at( i * n + j ) = v;
  };
  int get(int i, int j) {
    return matrix.at( i * n + j );
  };
  void printout(){
    for (int i = 0; i < m; i++) {
      for (int j = 0; j <= i; j++) {
	cout << matrix.at( i * n + j ) << " ";
      }
      cout << "\n";
    }
  };    
};


int main () {

  return 0;
}
