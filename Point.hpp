/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle

  This is the interface file for the Point class
*/
#ifndef POINT_HPP
#define POINT_HPP

class Point{
   private:
      double xCoord;
      double yCoord;

   public:
     explicit Point(double = 0.0, double = 0.0); //Defualt constructor, with default values of 0.0

     void setXCoord(double);
     void setYCoord(double);

     double getXCoord() const; //These functions are "read-only"
     double getYCoord() const;
};

#endif
