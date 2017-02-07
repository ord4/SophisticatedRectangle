/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle

  This is the interface file for the Rectangle class
*/
#include "Point.hpp"

class Rectangle{
  private:
    //Create instances of the point class for the 4 points of rectangle
    Point p1;
    Point p2;
    Point p3;
    Point p4;

    //Define a couple variables that will be called upon more than once
    //Should these be removed to make sure the data doesn't become stale?
    double lengthVar;
    double widthVar;

  public:
    void setCoords(Point, Point, Point, Point); //Set points based on passed values

    double length(); //Determine the length of the rectangle and return to user

    double width(); //Determine the width and return to the user

    double perimeter(); //Calculate the perimeter and return to user

    double area(); //Calculate area and return to user

    bool square(); //Determine whether or not the rectangle is a square
};
