#include <iostream>
#include "Circle.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Circle c(5, 5, 0, 1, 10);

    c.show();
    c.move(2, 3);
    c.rotate(45);
    c.setRadius(15);
    c.show();
    c.hide();
}