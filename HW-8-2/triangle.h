#pragma once
#include <string>
#include "figure.h"
#include "geometry_exception.h"

class Triangle : public Figure
{
private:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    Triangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0);
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();
    std::string get_name();
    void print_myself() override;
};