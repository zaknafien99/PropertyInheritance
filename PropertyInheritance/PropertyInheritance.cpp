#include "pch.h"

using namespace System;

public ref class Shape abstract
{
public:
    virtual property double Area;
}; // defines a property called Area that is virtual and which can be overridden bu subclasses

public ref class Circle : Shape
{
    double radius;
public:
    Circle(double r)
    {
        radius = r;
    }

    virtual property double Area
    {
        double get() override {
            return Math::PI * radius * radius;
        }
    }
};

void printArea(Shape^ s)
{
    Console::WriteLine("Area is {0}", s->Area);
}

int main(array<System::String ^> ^args)
{
    Circle^ c = gcnew Circle(4.0);
    printArea(c);
    return 0;
}
