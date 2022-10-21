#include "Time.h"

Time::Time (int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
    if (hours < 0 || minutes < 0 || seconds < 0) 
        throw TimeError();
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    if (hours >= 24) throw TimeError(1);
}

Time::Time (float tm) {
    hours = int(tm);
    float min = (tm - hours) * 60;
    minutes = int (min);
    seconds = (min - minutes) * 60;
}

Time Time::operator+ (const Time& tm2) const {
    int s = seconds + tm2.seconds;
    int m = minutes + tm2.minutes;
    int h = hours + tm2.hours;
    return Time(h, m, s);
}

Time Time::operator+ (const float& tm2) const {
    return (Time(hours, minutes, seconds) + Time(tm2));
}

float operator+ (const float& tmF, const Time& tmT) {
    return (tmF + float(tmT));
}

Time Time::operator- (const Time& tm2) const {
    int s = seconds, m = minutes, h = hours;
    if (seconds < tm2.seconds){
        s += 60;
        m--;
    } 
    s -= tm2.seconds;
    if (minutes < tm2.minutes){
        m += 60;
        h--;
    } 
    m -= tm2.minutes;
    h -= tm2.hours;
    return Time(h, m, s);
}

bool Time::operator> (const Time& tm2) const {
    if (hours > tm2.hours) return true;
    else if (hours == tm2.hours) {
        if (minutes > tm2.minutes) return true;
        else if (minutes == tm2.minutes) {
            if (seconds > tm2.seconds) return true;
            return false;
        }
        else 
            return false;
    }
    else 
        return false;
}

bool Time::operator>= (const Time& tm2) const {
    if (hours > tm2.hours) return true;
    else if (hours == tm2.hours) {
        if (minutes > tm2.minutes) return true;
        else if (minutes == tm2.minutes) {
            if (seconds >= tm2.seconds) return true;
            return false;
        }
        else 
            return false;
    }
    else 
        return false;
}

bool Time::operator< (const Time& tm2) const {
    if (hours < tm2.hours) return true;
    else if (hours == tm2.hours) {
        if (minutes < tm2.minutes) return true;
        else if (minutes == tm2.minutes) {
            if (seconds < tm2.seconds) return true;
            return false;
        }
        else 
            return false;
    }
    else 
        return false;
}

bool Time::operator<= (const Time& tm2) const {
    if (hours < tm2.hours) return true;
    else if (hours == tm2.hours) {
        if (minutes < tm2.minutes) return true;
        else if (minutes == tm2.minutes) {
            if (seconds <= tm2.seconds) return true;
            return false;
        }
        else 
            return false;
    }
    else 
        return false;
}

bool Time::operator== (const Time& tm2) const {
    if (minutes == tm2.minutes && seconds == tm2.seconds && hours == tm2.hours) return true;
    else return false;
}

std::ostream& operator<< (std::ostream& out, const Time& tm) {
    out << tm.hours << ":" << tm.minutes << ":" << tm.seconds;
    return out;
}

