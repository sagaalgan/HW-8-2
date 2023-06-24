#include <iostream>
#include <string>
#include "figure.h"
#include "square.h"
#include "righttriangle.h"
#include "rhombus.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include "parallelogram.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "triangle.h"
#include "geometry_exception.h"


void print_info(Figure* figure)
{
    figure->print_myself();
}

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        Triangle triangle(10, 20, 30, 20, 60, 70);
        print_info(&triangle);
    }
    catch (InvalidTriangleException& e)
    {
        std::cerr << "Ошибка создания треугольника: " << e.what() << std::endl;
    }
    try {
        Righttriangle righttriangle(10, 20, 30, 90, 60, 30);
        print_info(&righttriangle);
    }
    catch (InvalidTriangleException& e)
    {
        std::cerr << "Ошибка создания прямоугольного треугольника: " << e.what() << std::endl;
    }
    catch (InvalidRightTriangleException& e)
    {
        std::cerr << "Ошибка создания прямоугольного треугольника: " << e.what() << std::endl;
    }
    try {
        Isoscelestriangle isoscelestriangle(10, 20, 10, 60, 70, 50);
        print_info(&isoscelestriangle);
    }
    catch (InvalidTriangleException& e)
    {
        std::cerr << "Ошибка создания равнобедренного треугольника: " << e.what() << std::endl;
    }
    catch (InvalidIsoscelestTriangleException& e)
    {
        std::cerr << "Ошибка создания равнобедренного треугольника: " << e.what() << std::endl;
    }
    try {
        Equilateraltriangle equilateraltriangle(30, 30, 30, 60, 60, 60);
        print_info(&equilateraltriangle);
    }
    catch (InvalidTriangleException& e)
    {
        std::cerr << "Ошибка создания равностороннего треугольника: " << e.what() << std::endl;
    }
    catch (InvalidEquilateraltriangleException& e)
    {
        std::cerr << "Ошибка создания равностороннего треугольника: " << e.what() << std::endl;
    }
    try {
        Quadrilateral quadrilateral(10, 20, 30, 40, 90, 90, 90, 90);
        print_info(&quadrilateral);
    }
    catch (InvalidQuadrilateralException& e)
    {
        std::cerr << "Ошибка создания четырехугольника: " << e.what() << std::endl;
    }
    try {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        print_info(&rectangle);
    }
    catch (InvalidQuadrilateralException& e)
    {
        std::cerr << "Ошибка создания прямоугольника: " << e.what() << std::endl;
    }
    catch (InvalidRectangleException& e)
    {
        std::cerr << "Ошибка создания прямоугольника: " << e.what() << std::endl;
    }
    try {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        print_info(&square);
    }
    catch (InvalidQuadrilateralException& e)
    {
        std::cerr << "Ошибка создания квадрата: " << e.what() << std::endl;
    }
    catch (InvalidSquareException& e)
    {
        std::cerr << "Ошибка создания квадрата: " << e.what() << std::endl;
    }
    try {
        Parallelogram parallelogram(10, 30, 1, 30, 80, 100, 80, 100);
        print_info(&parallelogram);
    }
    catch (InvalidQuadrilateralException& e)
    {
        std::cerr << "Ошибка создания параллелограмма: " << e.what() << std::endl;
    }
    catch (InvalidParallelogramException& e)
    {
        std::cerr << "Ошибка создания параллелограмма: " << e.what() << std::endl;
    }
    try {
        Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
        print_info(&rhombus);
    }
    catch (InvalidQuadrilateralException& e)
    {
        std::cerr << "Ошибка создания ромба: " << e.what() << std::endl;
    }
    catch (InvalidRhombusException& e)
    {
        std::cerr << "Ошибка создания ромба: " << e.what() << std::endl;
    }
    return 0;
}