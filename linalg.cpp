//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <vector>
using namespace std;

class storage {

protected:
  vector<int> triangle;
  int m;
public:
  storage(int m)
    : m(m),triangle((m * (m+1))/2) {};

  // note i,j start at 0, so (0,0) is 1 (1,0) is 1 (1,1) is 1 (2,0) is 1 (2,1) is 2 (2,2) is 1
  
  void set(int i, int j, int v) {
    triangle.at( (i * (i+1))/2  + j ) = v;
  };
  int get(int i, int j) {
    return triangle.at( (i * (i+1))/2 + j );
  };
  void printout(){
    for (int i = 0; i < m; i++) {
      for (int j = 0; j <= i; j++) {
	cout << triangle.at( (i * (i+1))/2 + j) << " ";
      }
      cout << "\n";
    }
  };    
};

class Pascal : public storage {
  
public:
  Pascal(int m) : storage(m) {
      for (int i = 0; i < m; i++) {
       for (int j = 0; j <= i; j++) {
	if ((j == 0) || (j == i)) {
	  set( i, j, 1 );
        }
	else{
	  set( i, j, get(i-1,j-1) + get(i-1,j) );
	}  
      }
    }
  };
  int getvalue(int i, int j) {
    if ( ((i * (i+1))/2 + j) > ((m * (m+1))/2)) {
      triangle.resize( ((i+1) * (i+2))/2);
      for (int ii = m; ii < i+1; ii++) {
        for (int jj = 0; jj <= ii; jj++) {
	  if ((jj == 0) || (jj == ii)) {
	    set( ii, jj, 1 );
          }
	  else{
	    set( ii, jj, get(ii-1,jj-1) + get(ii-1,jj) );
	  }  
        }
      }
      m = i + 1;
    }
    return get(i, j);
  };
};



int main () {

  auto p = Pascal(5); 
  p.printout();
  p.set(4,2,0);
  p.printout();
  cout << p.getvalue(10,8) << "\n";
  p.printout();
  return 0;
}
