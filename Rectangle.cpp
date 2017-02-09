/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle

  This is the implementation file for the Rectangle class
*/
#include <cmath>
#include "Rectangle.hpp"
#include "Point.hpp"

Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4){
  setCoords(p1, p2, p3, p4);
}

void Rectangle::setCoords(Point p1, Point p2, Point p3, Point p4){
   p1 = p1;
   p2 = p2;
   p3 = p3;
   p4 = p4;
}

double Rectangle::length() const{ //const b/c data shouldn't be modified
   if ((abs(p1.yCoor - p4.yCoord)) <= (abs(p1.xCoord - p2.xCoord))){
      lengthVar = abs(p1.xCoord - p2.xCoord);
      return lengthVar;
   }
   else{
      lengthVar = abs(p1.yCoor - p4.yCoord);
      return lengthVar;
   }
}

double Rectangle::width() const{
   if ((abs(p1.yCoor - p4.yCoord)) >= (abs(p1.xCoord - p2.xCoord))){
      widthVar = abs(p1.xCoord - p2.xCoord);
      return widthVar
   }
   else{
      widthVar = abs(p1.yCoor - p4.yCoord);
      return widthVar;
   }
}

double Rectangle::perimeter() const{
   return (2 * lengthVar) + (2 * widthVar);
}

double Rectangle::area() const{
   return lengthVar * widthVar;
}

// Checks to see if length == width and returns true or false
bool Rectangle::square() const{
   return lengthVar == widthVar;
}
