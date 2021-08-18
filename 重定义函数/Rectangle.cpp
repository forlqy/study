#include "Rectangle.h"
using std::string;
Rectangle::Rectangle(double w, double h) : width{ w }, height{ h }{
}
Rectangle::Rectangle(double w, double h, Color color_, bool filled_) {
    width = w;
    height = h;
    Shape::setColor(color_);
    Shape::setFilled(filled_);
}
double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double w) { width = w; }
double Rectangle::getHeight() const { return height; }
void Rectangle::setHeight(double h) { height = h; }

double Rectangle::getArea() const {
    return width * height;
}

string Rectangle::toString() {
    return ("Rectangle: width" + std::to_string(width) + ","
        + "height" + std::to_string(height) + ","
        + colorToString() + filledToString());
}