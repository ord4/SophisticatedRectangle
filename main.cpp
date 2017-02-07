/*
  Orion Davis 3003072 ord4@zips.uakron.edu
  The University of Akron, Computer Science II
  ASSGN3: Sophisticated Rectangle
*/

#include <iostream>
#include <stdexcept>
#include "Rectangle.hpp"

int main(){
  // Create the points of the rectangles
  Point w{1.0, 1.0};
  Point x{5.0, 1.0};
  Point y{5.0, 3.0};
  Point z{1.0, 3.0};
  Point j{0.0, 0.0};
  Point k{1.0, 0.0};
  Point m{1.0, 1.0};
  Point n{0.0, 1.0};

  // Create first rectangle, r1, with points z, y, x, and w
  Rectangle r1{z, y, x, w};

  std::cout << "Rectangle 1:";
  std::cout << "\nlength = " << r1.length();
  std::cout << "\nwidth = " << r1.width();
  std::cout << "\nperimeter = " << r1.perimeter();
  std::cout << "\narea = " << r1.area();
  std::cout << "\nThe rectangle " << (r1.square() ? "is" : "is not") << " a square.\n";

  // Create second rectangnle, r2, with points j, k, m, and n
  Rectangle r2{j, k, m, n};
  std::cout << "\nRectangle 2:";
  std::cout << "\nlength = " << r2.length();
  std::cout << "\nwidth = " << r2.width();
  std::cout << "\nperimeter = " << r2.perimeter();
  std::cout << "\narea = " << r2.area();
  std::cout << "\nThe rectangle " << (r2.square() ? "is" : "is not") << " a square.\n";

}
