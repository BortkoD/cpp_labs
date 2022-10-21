#pragma once
#include <iostream>

class Distance
{
    private:
        int feet;
        float inches;
    public:
        // конструктор по умолчанию
        Distance ( ) : feet (0), inches (0.0) { }
        // конструктор с двумя параметрами
        Distance (int ft, float in) : feet (ft), inches (in) { }

        void getdist();

        Distance operator+ (const Distance&) const;
        Distance operator- (const Distance&) const;
        friend std::ostream& operator<< (std::ostream&, const Distance&);
};