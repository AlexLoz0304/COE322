#include "zeroclasslib.hpp"
#include <cmath>
polynomial:: polynomial( std::vector<double> c) : coefficients(c) {
  if (coefficients[0] == 0)
    throw("try again with a positive coefficient");
};

bool polynomial:: is_odd() const {
    if (coefficients.size() % 2 == 0)
      return true;
    else
      return false;
  };

double polynomial:: evaluate_at(double x) const {
    double result = 0.0;
    int size = coefficients.size();
    
    for ( int i = 0; i < size; i++){
      result += coefficients[size-1-i] * pow(x,i);
	}
    return result;
  };

    
void find_initial_bounds (const polynomial &p,double &left, double &right){
  if (not p.is_odd())
    throw("polynomial isnt odd");
  if ((p(right) > 0) and (p(left) < 0))
    return;
  else if ((p(right) < 0) and (p(left) > 0))
    return;
  else if(p(right) < 0){
    while (p(left) <= 0){
      left -= .1;
    }
  }
  else if(p(right) > 0){
    while (p(left) >= 0){
      left -= .1;
    }
  }
  else if(p(left) < 0){
    while (p(right) <= 0){
      right += .1;
    }
  }  
  else if (p(left) > 0){
    while (p(right) >= 0) {
      right += .1;
    }
  }
};
    
void move_bounds_closer
     (const polynomial &p,double &left, double &right, bool trace ){
  if ((right == left) or left > right)
    throw("bounds not allowed");
  double mid = (left + right) / 2;
    if ((p(left) < 0) and (p(mid) < 0)){
      left = mid;
      return;
    }
    else if ((p(left) < 0) and (p(mid) > 0)){
      right = mid;
      return;
    }
    else if ((p(left) > 0) and (p(mid) < 0)){     
      right = mid;
      return;
    }
    else if ((p(left) > 0) and (p(mid) > 0)){
      left = mid;
      return;
    }
	     
};

double find_zero( const polynomial &p, double prec, bool trace){
  double zero = 0;
  double left = -100;
  double right = 100;
  find_initial_bounds(p,left,right);
  while (std::abs(p(zero)) > prec){
    move_bounds_closer(p,left,right);
    zero = (right + left) / 2;
  }
  return zero;
};

