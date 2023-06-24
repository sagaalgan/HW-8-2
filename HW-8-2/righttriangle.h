#pragma once
#include <string>
#include "triangle.h"
#include "geometry_exception.h"

class Righttriangle : public Triangle
{
private:
    std::string name;
public:
    Righttriangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0);
    std::string get_name();
    void print_myself() override;
};
