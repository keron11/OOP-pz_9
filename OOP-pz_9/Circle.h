#include "GeometricFigure.h"
#include <iostream>

using namespace std;

#pragma once
class Circle : public GeometricFigure {
private:
    double radius;

public:
    Circle(double x = 0, double y = 0, double angle = 0, double scale = 1, double radius = 1)
        : GeometricFigure(x, y, angle, scale), radius(radius) {
    }
    void show() const override;
    void hide() override;
    void rotate(double degrees) override;
    void move(double dx, double dy) override;
    void setRadius(double r);
    double getRadius() const;
};