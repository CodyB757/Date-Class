#include "Date.h"
#include <string>

using namespace std;

static const string MONTH_NAMES[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m;
        day = d;
        year = y;
    }
    else {
        month = 1;
        day = 1;
        year = 1900;
    }
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

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

string Date::formatNumeric() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::formatLong() const {
    return MONTH_NAMES[month] + " " + to_string(day) + ", " + to_string(year);
}

string Date::formatDayFirst() const {
    return to_string(day) + " " + MONTH_NAMES[month] + " " + to_string(year);
}