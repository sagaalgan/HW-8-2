#include <iostream>
#include "square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != c || b != d || c != b || a != d || a != b) || (A != 90 || B != 90 || C != 90 || D != 90))
        throw InvalidSquareException("все стороны не равны или 1 из углов не равен 90 градусам\n");
}

std::string Square::get_name()
{
    name = "Квадрат: ";
    return name;
}

void Square::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}
