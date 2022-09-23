#include <iostream>
using namespace std;

class Time {
    public: 
        Time() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time (int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
            if (seconds >= 60) {
                minutes += seconds / 60;
                seconds %= 60;
            }
            if (minutes >= 60) {
                hours += minutes / 60;
                minutes %= 60;
            }
        }

        void showTime() const{
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }

        void addTime(Time t1, Time t2){
            hours = t1.hours+t2.hours;
            minutes = t1.minutes+t2.minutes;
            seconds = t1.seconds+t2.seconds;
            if (seconds >= 60) {
                minutes += seconds / 60;
                seconds %= 60;
            }
            if (minutes >= 60) {
                hours += minutes / 60;
                minutes %= 60;
            }
        }

    private:
        int hours;
        int minutes;
        int seconds;
};

int main() {
    int h, m, s;
    cout << "Enter hours, minutes, seconds: ";
    cin >> h >> m >> s;
    const Time t1 = Time(h, m, s);
    t1.showTime();

    cout << "Enter hours, minutes, seconds: ";
    cin >> h >> m >> s;
    const Time t2 = Time(h, m, s);
    t2.showTime();

    Time t3 = Time();
    t3.addTime(t1, t2);
    t3.showTime();

    return 0;
}