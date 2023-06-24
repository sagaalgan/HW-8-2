#include <iostream>
#include "rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != b || b != c || a != c || a != d || b != d || c != d) || (A != C || B != D))
        throw InvalidParallelogramException("��� ������� �� ����� ��� ���� A, B � C, D ������� �� �����\n");
}

std::string Rhombus::get_name()
{
    name = "����: ";
    return name;
}

void Rhombus::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "����: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}