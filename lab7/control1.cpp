#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time inputTime () {
    cout << "Enter amount of hours, minutes and seconds: ";
    Time t;
    cin >> t.hours >> t.minutes >> t.seconds;
    return t; 
}

int convertToSeconds (Time t) {
    int sec = t.hours * 3600 + t.minutes * 60 + t.seconds;
    return sec;
}

void showTime(Time t) {
    cout << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds" << endl;
}

Time addTime(Time t1, Time t2) {
    Time t;
    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds > 60) {
        t.minutes += t.seconds / 60;
        t.seconds %= 60;
    }
    t.minutes = t1.minutes + t2.minutes;
    if (t.minutes > 60) {
        t.hours += t.minutes / 60;
        t.minutes %= 60;
    }
    t.hours = t1.hours + t2.hours;
    return t;
}

Time subtractTime(Time t1, Time t2) {
    int t1_sec = convertToSeconds(t1);
    int t2_sec = convertToSeconds(t2);
    if (t1_sec < t2_sec) {
        cout << "Unable to subtract t1 from t2" << endl;
        Time tmp = t1;
        t1 = t2;
        t2 = tmp;
        t1_sec = convertToSeconds(t1);
        t2_sec = convertToSeconds(t2);
    }
    Time t;
    int t_sec = t1_sec - t2_sec;
    t.hours = t_sec / 3600; t_sec %= 3600;
    t.minutes = t_sec / 60; t_sec %= 60;
    t.seconds = t_sec;

    return t;
}

int main() {
    Time t = inputTime();
    cout << "There are " << convertToSeconds(t) << " seconds in this period" << endl;

    Time t1 = inputTime();
    Time t2 = inputTime();


    cout << "t1 + t2 = ";
    showTime(addTime(t1, t2));

    cout << "t1 - t2 = ";
    showTime(subtractTime(t1, t2));

    return 0;
}