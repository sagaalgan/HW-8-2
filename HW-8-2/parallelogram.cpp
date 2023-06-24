#include <iostream>
#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != c || b != d) || (A != C || B != D))
        throw InvalidParallelogramException("������� �, � � b, d ������� �� ����� ��� ���� A, B � C, D ������� �� �����\n");
}

std::string Parallelogram::get_name()
{
    name = "��������������: ";
    return name;
}

void Parallelogram::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "����: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}