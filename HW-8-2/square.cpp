#include <iostream>
#include "square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != c || b != d || c != b || a != d || a != b) || (A != 90 || B != 90 || C != 90 || D != 90))
        throw InvalidSquareException("��� ������� �� ����� ��� 1 �� ����� �� ����� 90 ��������\n");
}

std::string Square::get_name()
{
    name = "�������: ";
    return name;
}

void Square::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "����: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}
