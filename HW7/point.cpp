//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
#include <cmath>
using namespace std;

class Point {

private:
  float x,y;
public:
  Point(float in_x,float in_y)
    : x(in_x),y(in_y) {}
  float distance_to_origin(){
    return sqrt( x*x + y*y );
  };
  float distance(Point q){
    return sqrt(pow((x-q.x),2) + pow((y-q.y),2));
  };
  float angle(){
    return atan(y/x);
  };
  Point halfway(Point q){
    return Point( ((*this) + q) * .5);
  };
  void asstring(){
    cout << "(" << x << "," << y << ")" <<  "\n";
  };
  Point operator+(Point q){
    return Point(x + q.x, y + q.y);
  };
  Point operator*(float a){
    return Point(x * a,y * a);
  };
};

int main () {

  Point p(1.0,1.0);
  p.asstring();
  Point p1(3.0,4.0);
  p1.asstring();
  Point h = p.halfway(p1);
  h.asstring();
  return 0;
}
