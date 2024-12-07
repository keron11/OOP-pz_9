#include "Circle.h"


void Circle::show() const {
    cout << "Коло на (" << x << ", " << y << "), радіусом " << radius
        << ", повернуто на " << angle << " градусів, масштабовано на " << scale << "\n";
}

void Circle::hide() {
    cout << "Коло на (" << x << ", " << y << ") сховано\n";
}

void Circle::rotate(double degrees) {
    angle += degrees;
    cout << "Коло повернуто на " << angle << " градусів\n";
}

void Circle::move(double dx, double dy) {
    x += dx;
    y += dy;
    cout << "Коло перетягнули на (" << x << ", " << y << ")\n";
}

void Circle::setRadius(double r) {
    if (r <= 0) {
        cerr << "Радіус повнинен бути більше 0\n";
    }
    else {
        radius = r;
    }
}

double Circle::getRadius() const {
    return radius;
}