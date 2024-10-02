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
  //constructor
  Point(float in_x,float in_y)
    : x(in_x),y(in_y) {}
  float distance_to_origin(){
    return sqrt( x*x + y*y );
  };
  float distance(Point q){
    return sqrt(pow((x-q.x),2) + pow((y-q.y),2));
  };
  //method
  float angle(){
    return atan(y/x);
  };
  Point halfway(Point q){
    Point halfwaypoint((q.x + x) / 2, (q.y + y) / 2);
    return halfwaypoint;
  };
  void asstring(){
    cout << x << "   " << y << "\n";
  };
};

int main () {

  Point p(1.0,1.0);
  p.asstring();
  Point p1(3.0,4.0);
  p1.asstring();
  float d = p1.distance_to_origin();
  float a = p1.angle();
  cout << d << "  " << a << "\n";
  float dist = p.distance(p1);
  cout << dist << "\n";
  Point h = p.halfway(p1);
  h.asstring();
    
    return 0;
}
