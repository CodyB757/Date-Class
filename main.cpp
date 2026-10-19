#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    cout << "=== DATE CLASS TEST DRIVER ===" << endl << endl;

    cout << "-- Test 1: Default Constructor --" << endl;
    Date d1;
    cout << "Numeric:   " << d1.formatNumeric() << endl;
    cout << "Long:      " << d1.formatLong() << endl;
    cout << "Day-First: " << d1.formatDayFirst() << endl << endl;

    cout << "-- Test 2: Valid Custom Constructor (12/25/2021) --" << endl;
    Date d2(12, 25, 2021);
    cout << "Numeric:   " << d2.formatNumeric() << endl;
    cout << "Long:      " << d2.formatLong() << endl;
    cout << "Day-First: " << d2.formatDayFirst() << endl << endl;

    return 0;
}