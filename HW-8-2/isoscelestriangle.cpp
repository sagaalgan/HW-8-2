#include <iostream>
#include "isoscelestriangle.h"

Isoscelestriangle::Isoscelestriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    if (a != c || A != C)
        throw InvalidIsoscelestTriangleException("������� a � c �� ����� � ���� A � B �� �����\n");
}

std::string Isoscelestriangle::get_name()
{
    name = "�������������� ����������� : ";
    return name;
}

void Isoscelestriangle::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
    std::cout << "���: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
}