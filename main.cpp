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

    cout << "-- Test 3: Leap Year Validation (Feb 29, 2024 vs Feb 29, 2023) --" << endl;
    Date leapDate(2, 29, 2024);
    cout << "Leap Date (2/29/2024): " << leapDate.formatNumeric() << endl;

    Date invalidLeap(2, 29, 2023);
    cout << "Invalid Leap (2/29/2023 -> reset): " << invalidLeap.formatNumeric() << endl << endl;

    cout << "-- Test 4: Mutator setDate() with Boundary & Invalid Inputs --" << endl;
    Date d3;
    d3.setDate(4, 30, 2022);
    cout << "Valid Set (4/30/2022): " << d3.formatNumeric() << endl;

    d3.setDate(4, 31, 2022);
    cout << "Invalid Set (4/31/2022 -> reset): " << d3.formatNumeric() << endl << endl;

    cout << "-- Test 5: Overload Testing --" << endl;
    cout << "d2.isLeapYear(): " << (d2.isLeapYear() ? "Yes" : "No") << endl;
    cout << "d2.isLeapYear(2000): " << (d2.isLeapYear(2000) ? "Yes" : "No") << endl;
    cout << "d2.lastDay(): " << d2.lastDay() << endl;
    cout << "d2.lastDay(2, 2024): " << d2.lastDay(2, 2024) << endl;

    return 0;
}