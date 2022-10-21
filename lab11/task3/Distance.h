#pragma once
#include <iostream>

class Distance
{
    private:
        int feet;
        float inches;
        const float MTF;
    public:
        // конструктор по умолчанию
        Distance ( ) : feet (0), inches (0.0), MTF (3.280833F) { }
        // конструктор с двумя параметрами
        Distance (int ft, float in) : feet (ft), inches (in), MTF (3.280833F) { }
        Distance (float meters) : MTF (3.280833F) {
            float fltfeet = MTF * meters; // перевод в футы
            feet = int (fltfeet); // число полных футов
            inches = fltfeet - feet; // остаток - это дюймы
        }

        friend std::ostream& operator<< (std::ostream&, const Distance&);
        Distance operator+ (const Distance&) const;
        Distance operator- (const Distance&) const;
        Distance operator+ (const float&) const;

        operator float( ) const
        {
            float fracfeet = inches / 12;
            fracfeet += static_cast<float>( feet );
            return fracfeet / MTF;
        }
};