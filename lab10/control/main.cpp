#include <iostream>
#include "Triangle.cpp"
#include "Dot.cpp"
using namespace std;

int main() 
{   
    // Композиция, точки-вершины создаются вместе с треугольником
    try 
    {
        Triangle tr1;
        tr1.showSides(); 
        cout << "Petimeter: " << tr1.getPerimeter() << endl;
        cout << "Square: " << tr1.getSquare() << endl;
    }
    catch (Triangle::SideError err)
    {
        err.printMessage();
    }

    // Агрегация, точки создаются отдельно и только потом назначаются вершинами
    try 
    {
        double x, y;
        cout << "Enter x and y for the first dot: ";
        cin >> x >> y;
        Dot p1 = Dot(x, y);
        cout << "Enter x and y for the second dot: ";
        cin >> x >> y;
        Dot p2 = Dot(x, y);
        cout << "Enter x and y for the third dot: ";
        cin >> x >> y;
        Dot p3 = Dot(x, y);

        Triangle tr2 = Triangle(p1, p2, p3);
        tr2.showSides(); 
        cout << "Petimeter: " << tr2.getPerimeter() << endl;
        cout << "Square: " << tr2.getSquare() << endl;

        
    }
    catch (Triangle::SideError err)
    {
        err.printMessage();
    }

    return 0;
}