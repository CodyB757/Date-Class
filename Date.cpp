#include "Date.h"
#include <string>

using namespace std;

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::lastDay() const {
    return lastDay(month, year);
}

int Date::lastDay(int m, int y) const {
    if (m < 1 || m > 12) {
        return 0;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    if (m == 2) {
        return isLeapYear(y) ? 29 : 28;
    }
    return 0;
}

bool Date::isValidDate(int m, int d, int y) const {
    if (y < 1 || m < 1 || m > 12) {
        return false;
    }
    return d >= 1 && d <= lastDay(m, y);
}