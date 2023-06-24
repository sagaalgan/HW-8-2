#include <iostream>
#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a != c || b != d) || (A != C || B != D))
        throw InvalidParallelogramException("стороны а, с и b, d попарно не равны или углы A, B и C, D попарно не равны\n");
}

std::string Parallelogram::get_name()
{
    name = "Параллелограмм: ";
    return name;
}

void Parallelogram::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
}