#pragma once
#include <string>
#include "figure.h"
#include "geometry_exception.h"

class Quadrilateral : public Figure
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Quadrilateral(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0);
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    std::string get_name();
    void print_myself() override;
};
