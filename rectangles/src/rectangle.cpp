#include "rectangle.h"

rectangle::rectangle(const int &x,const int &y) : x(x), y(y) {}

int rectangle::getX() const {
    return x;
}

void rectangle::setX(const int &x1) {
    rectangle::x = x1;
}

int rectangle::getY() const {
    return y;
}

void rectangle::setY(const int &y1) {
    rectangle::y = y1;
}

