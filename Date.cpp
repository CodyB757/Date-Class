#include "Date.h"
#include <string>

using namespace std;

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

static const string MONTH_NAMES[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

string Date::formatNumeric() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::formatLong() const {
    return MONTH_NAMES[month] + " " + to_string(day) + ", " + to_string(year);
}

string Date::formatDayFirst() const {
    return to_string(day) + " " + MONTH_NAMES[month] + " " + to_string(year);
}
