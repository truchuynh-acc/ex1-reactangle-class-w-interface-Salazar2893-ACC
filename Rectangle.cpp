/**
Programmer: Richard Salazar
Assignment: 1
Description: Rectangle Class that contains length and width of rectangle
with methods that will retrieve new length/width measurements and update
the previous measurements and then calculate the rectangle area.
*/

#include "Rectangle.h"

// Constructor
Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
}

// Setters
bool Rectangle::set(double tempLength, tempWidth){

    if (tempLength > 0.0 && tempWidth > 0.0){
        length = tempLength;
        width = tempWidth;
        return true;
    } else {
        return false;
    }
}

// Getters
double Rectangle::getLength() const {

    return length;
}

double Rectangle::getWidth() const {

    return width;
}

double Rectangle::getArea() const {
    return length * width;
}