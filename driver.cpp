/**
Programmer: Richard Salazar
Assignment: 1
Description: This program contains a rectangle class that will store the length and width
of a rectangle and calculate the area.
Course: COSC 2436 PF III Data Structures
1/28/24
*/

#include "Rectangle.h"

int main(){

    Rectangle myRectangle;

    std::cout << "Rectangle's Base Measurements" << std::endl;
    std::cout << "Length: " << myRectangle.getLength() << std::endl;
    std::cout << "Width: " << myRectangle.getWidth() << std::endl;

    myRectangle.setLength(10);
    myRectangle.setWidth(5);
    std::cout << "Rectangle's Updated Measurements" << std::endl;
    std::cout << "Length: " << myRectangle.getLength() << std::endl;
    std::cout << "Width: " << myRectangle.getWidth() << std::endl;
    std::cout << "Area: " << myRectangle.getArea() << std::endl;

    return 0;

}