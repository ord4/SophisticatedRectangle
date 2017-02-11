/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle

  This is the implementation file for the Rectangle class

  The program is not properly creating the points because the code for the length and width should be correct, it is a matter of there not being data to collect from these points and their functions
*/
#include <cmath>
#include "Rectangle.hpp"
#include "Point.hpp"

using std::abs;

Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4){
  setCoords(p1, p2, p3, p4);
}

void Rectangle::setCoords(Point p1, Point p2, Point p3, Point p4){
  pointOne.setXCoord(p1.getXCoord());
  pointOne.setYCoord(p1.getYCoord());
  pointTwo.setXCoord(p2.getXCoord());
  pointTwo.setYCoord(p2.getYCoord());
}


double Rectangle::length(){
	setLengthVar(abs(pointOne.getXCoord() - pointTwo.getXCoord()));
	return lengthVar;
}

double Rectangle::width(){
	setWidthVar(abs(pointThree.getYCoord() - pointTwo.getYCoord()));
	return widthVar;
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

void Rectangle::setLengthVar(double len){
	lengthVar = len;
}

void Rectangle::setWidthVar(double width){
	widthVar = width;
}
