#pragma once
#include "Dot.h"
#include <iostream>
#include <string>
using namespace std;

class Triangle
{
    private:
        Dot d1, d2, d3;

    public:
        Triangle();
        Triangle(Dot, Dot, Dot);
        double getPerimeter();
        double getSquare();
        void getSides(double&, double&, double&);
        void showSides();
        class SideError
        {
            private:
                string message;
            public:
                SideError () : message ("Wrong side length") {}
                void printMessage() const {
                    cout << message << endl;
                }
        };
};