#pragma once
#include <stdexcept>

class GeometryException : public std::domain_error
{
public:
    explicit GeometryException(const std::string& message) : std::domain_error(message) {}
};
class InvalidTriangleException : public GeometryException
{
public:
    explicit InvalidTriangleException(const std::string& message) : GeometryException(message) {}
};
class InvalidRightTriangleException : public GeometryException
{
public:
    explicit InvalidRightTriangleException(const std::string& message) : GeometryException(message) {}
};
class InvalidIsoscelestTriangleException : public GeometryException
{
public:
    explicit InvalidIsoscelestTriangleException(const std::string& message) : GeometryException(message) {}
};
class InvalidEquilateraltriangleException : public GeometryException
{
public:
    explicit InvalidEquilateraltriangleException(const std::string& message) : GeometryException(message) {}
};
class InvalidQuadrilateralException : public GeometryException
{
public:
    explicit InvalidQuadrilateralException(const std::string& message) : GeometryException(message) {}
};
class InvalidRectangleException : public GeometryException
{
public:
    explicit InvalidRectangleException(const std::string& message) : GeometryException(message) {}
};
class InvalidSquareException : public GeometryException
{
public:
    explicit InvalidSquareException(const std::string& message) : GeometryException(message) {}
};
class InvalidParallelogramException : public GeometryException
{
public:
    explicit InvalidParallelogramException(const std::string& message) : GeometryException(message) {}
};
class InvalidRhombusException : public GeometryException
{
public:
    explicit InvalidRhombusException(const std::string& message) : GeometryException(message) {}
};