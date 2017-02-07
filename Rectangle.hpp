/*
  This is the interface file for the Rectangle class
*/
//Create a subclass for points??
class Rectangle{
  private:
    //Delcare the variables to hold the points of the rectangle
    double p1;
    double p2;
    double p3;
    double p4;

  public:
    void Rectangle(); //Default constructor will set all points to 0 to start

    void setCoords(double, double, double, double); //Set points based on passed values

    double length(); //Determine the length of the rectangle and return to user

    double width(); //Determine the width and return to the user

    double perimeter(); //Calculate the perimeter and return to user

    double area(); //Calculate area and return to user

    bool square(); //Determine whether or not the rectangle is a square
};
