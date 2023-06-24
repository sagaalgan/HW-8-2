#include <iostream>
#include "equilateraltriangle.h"

Equilateraltriangle::Equilateraltriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    if (a != b || b != c || a != c || A != B || B != C || A != C)
        throw InvalidEquilateraltriangleException("все стороны не равны и все углы не равны\n");
}

std::string Equilateraltriangle::get_name()
{
    name = "Равносторонний треугольник: ";
    return name;
}

void Equilateraltriangle::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
    std::cout << "Улы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
}