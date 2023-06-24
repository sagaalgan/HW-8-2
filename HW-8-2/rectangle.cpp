#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != c || b != d) || (A != 90 || B != 90 || C != 90 || D != 90))
        throw InvalidRectangleException("стороны а, с и b, d попарно не равны или 1 из углов не равен 90 градусам\n");
}

std::string Rectangle::get_name()
{
    name = "Прямоугольник: ";
    return name;
}

void Rectangle::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}