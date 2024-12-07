#include "Circle.h"


void Circle::show() const {
    cout << "���� �� (" << x << ", " << y << "), ������� " << radius
        << ", ��������� �� " << angle << " �������, ������������ �� " << scale << "\n";
}

void Circle::hide() {
    cout << "���� �� (" << x << ", " << y << ") �������\n";
}

void Circle::rotate(double degrees) {
    angle += degrees;
    cout << "���� ��������� �� " << angle << " �������\n";
}

void Circle::move(double dx, double dy) {
    x += dx;
    y += dy;
    cout << "���� ����������� �� (" << x << ", " << y << ")\n";
}

void Circle::setRadius(double r) {
    if (r <= 0) {
        cerr << "����� �������� ���� ����� 0\n";
    }
    else {
        radius = r;
    }
}

double Circle::getRadius() const {
    return radius;
}