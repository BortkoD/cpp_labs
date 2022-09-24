#include <iostream>
#include <math.h>
using namespace std;

class Triangle {
    public:
        Triangle (int s1, int s2, int s3) {
            side1 = s1;
            side2 = s2;
            side3 = s3;
            if (side1 + side2 <= side3 || side1 + side3 <= side2 || side3 + side2 <= side1)
                throw WrongSideError();
        }
        Triangle () {
            side1 = 3;
            side2 = 4;
            side3 = 5;
        }

        double Square () {
            double p = (side1 + side2 + side3) / 2.0;
            return sqrt(p * (p - side1) * (p - side2) * (p - side3));
        }

        class WrongSideError {
            public:
                WrongSideError() : message("Wrong length of side") {}
                void WrongLengthError () const {
                    cout << message << endl;
                }
            private:
                string message;
        };

    private: 
        int side1;
        int side2;
        int side3;
};

int main() {
    int a, b, c;
    cout << "Enter length of triangle sides: ";
    cin >> a >> b >> c;
    try {
        Triangle tr = Triangle (a, b, c);
        cout << "Triangle square = " << tr.Square() << endl;
    }
    catch (Triangle::WrongSideError& err) {
        cout << "ERROR: ";
        err.WrongLengthError();
        return 1;
    }
}