#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time {
    public: 
        Time() : hours(0), minutes(0), seconds(0) { }
        Time (int, int, int);
        Time (float);

        friend std::ostream& operator<< (std::ostream&, const Time&);
        Time operator+ (const Time&) const;
        Time operator+ (const float&) const;
        Time operator- (const Time&) const;
        Time operator> (const Time&) const;
        Time operator>= (const Time&) const;
        Time operator< (const Time&) const;
        Time operator<= (const Time&) const;
        Time operator== (const Time&) const;

        operator float( ) const
        {
            float fl_sec = seconds / 60.0;
            float fl_min = (minutes + fl_sec) / 60;
            float fl_time = hours + fl_min;
            return fl_time;
        }

        class TimeError {
            public:
                TimeError() : message("Wrong time format") {}

                TimeError(int i) : message("Overflow. In total we get more than a day.") {}

                void showError() {
                    cout << message << endl;
                }

            private:
                string message;
        };

    private:
        int hours;
        int minutes;
        int seconds;
};