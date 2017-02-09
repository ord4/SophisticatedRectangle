/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle

  This is the implementation file for the Point class
*/
#include "Point.hpp"

Point::Point(double x, double y){
  setXCoord(x);
  setYCoord(y);
}

 void Point::setXCoord(double x){
  xCoord = x;
}

void Point::setYCoord(double y){
  yCoord = y;
}

double Point::getXCoord() const{
  return xCoord;
}

double Point::getYCoord() const{
  return yCoord;
}
