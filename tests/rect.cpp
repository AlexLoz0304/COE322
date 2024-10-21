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
    : x(in_x),y(in_y) {};
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
  float getx() { return x; };
  float gety() { return y; };
};

class Rectangle {

protected:
  Point bottomleft;
  float w,l;
  
public:
  Rectangle(Point botleft, float width, float length)
   : bottomleft(botleft),w(width),l(length) {};
  Rectangle(Point botleft, Point topright)
    : bottomleft(botleft), w(topright.getx() - botleft.getx()), l(topright.gety() - botleft.gety()) {};
  float area(){
    return w*l;
  };
  float rightedge_x(){
    return bottomleft.getx() + w;
  };
  float topedge_y() {
    return bottomleft.gety() + l;
  };
};

class Square : public Rectangle{

public:
  Square(Point botleft, float side)
    : Rectangle(botleft,side,side)  {};
};

int main () {

  Point p(1.0,1.0);
  p.asstring();
  Point p1(3.0,4.0);
  p1.asstring();
  float w = 5;
  float l = 10;
  Rectangle r(p,w,l);
  cout << r.area() << "\n";
  cout << r.rightedge_x() << "\n";
  cout << r.topedge_y() << "\n";
  Rectangle r2(p,p1);
  cout << r2.area() << "\n";
  cout << r2.rightedge_x() << "\n";
  cout << r2.topedge_y() << "\n";
  Square s(p,6);
  cout << s.area() << "\n";
  cout << s.rightedge_x() << "\n";
  cout << s.topedge_y() << "\n";
 
  return 0;
}
