#pragma once
class GeometricFigure {
protected:
    double x, y;
    double angle;
    double scale;

public:
    GeometricFigure(double x = 0, double y = 0, double angle = 0, double scale = 1)
        : x(x), y(y), angle(angle), scale(scale) {
    }

    virtual ~GeometricFigure() {}

    virtual void show() const = 0;
    virtual void hide() = 0;
    virtual void rotate(double degrees) = 0;
    virtual void move(double dx, double dy) = 0;
};