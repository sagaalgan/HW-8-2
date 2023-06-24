#pragma once
#include <string>
#include "quadrilateral.h"
#include "geometry_exception.h"

class Rhombus : public Quadrilateral
{
private:
    std::string name;
public:
    Rhombus(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0);
    std::string get_name();
    void print_myself() override;
};