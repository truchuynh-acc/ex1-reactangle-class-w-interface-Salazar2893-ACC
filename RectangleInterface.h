/**
Programmer: Richard Salazar
Assignment: 1
Description: Rectangle Interface
*/

#ifdef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

class RectangleInterface {

public:

    //Destructor
    virtual ~RectangleInterface(){

    }

    // Setter
    virtual bool set(double newLength, double newWidth) = 0;

    // Getters
    virtual double getLength() const = 0;
    virtual double getWidth() const = 0;


};

#endif