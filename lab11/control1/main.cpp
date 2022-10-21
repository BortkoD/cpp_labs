#include "Time.cpp"
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "Enter hours, minutes, seconds: ";
    cin >> h >> m >> s;
    const Time t1 = Time(h, m, s);
    cout << t1 << " or " << float(t1) << endl;

    cout << "Enter hours, minutes, seconds: ";
    cin >> h >> m >> s;
    const Time t2 = Time(h, m, s);
    cout << t2 << " or " << float(t2) << endl;

    Time t3 = t1 + t2;
    cout << t1 << " + " << t2 << " = " << t3 << endl;
    if (t1 >= t2) {
        Time t4 = t1 - t2;
        cout << t1 << " - " << t2 << " = " << t4 << endl;
    }
    else {
        Time t4 = t2 - t1;
        cout << t2 << " - " << t1 << " = " << t4 << endl;
    }

    float t5;
    cout << "Enter time in format x.x hours: ";
    cin >> t5;
    cout << t5 << " is about " << Time(t5) << endl;

    Time t6 = t1 + t5;
    cout << t1 << " + " << t5 << " = " << t6 << endl;
    float t7 = t5 + t1;
    cout << t5 << " + " << t1 << " = " << t7 << " (" << Time(t7) << ")" << endl;

    return 0;
}