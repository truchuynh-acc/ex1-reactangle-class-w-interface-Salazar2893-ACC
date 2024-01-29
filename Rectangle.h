/**
Programmer: Richard Salazar
Assignment: 1
Description: Header File
*/

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface {
public:

    // Constructor
    Rectangle();

    // Setter
    bool set(double, double);

    // Getters
    double getLength();
    double getWidth();
    double getArea();

private:
    double length;
    double width;


};

#endif