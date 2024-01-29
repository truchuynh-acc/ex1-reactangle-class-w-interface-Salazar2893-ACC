/**
Programmer: Richard Salazar
Assignment: 1
Description: Header File
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface {
public:

    // Constructor
    Rectangle();

    // Setter
    bool set(double tempLength, double tempWidth);

    // Getters
    double getLength() const;
    double getWidth() const;
    double getArea() const;

private:
    double length;
    double width;


};

#endif