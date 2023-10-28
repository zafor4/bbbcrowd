#include<iostream>
using namespace std;

int main() {
    long long year;
    bool is_leap, is_huluculu, is_bulukulu;
    bool first = true; // Flag to insert a blank line between output cases

    while (cin >> year) {
        is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        is_huluculu = (year % 15 == 0);
        is_bulukulu = (is_leap && year % 55 == 0);

        if (!first) {
            cout << endl; // Insert a blank line if it's not the first output case
        }
        first = false;

        if (is_leap) {
            cout << "This is leap year." << endl;
        }
        if (is_huluculu) {
            cout << "This is huluculu festival year." << endl;
        }
        if (is_bulukulu) {
            cout << "This is bulukulu festival year." << endl;
        }
        if (!is_leap && !is_huluculu && !is_bulukulu) {
            cout << "This is an ordinary year." << endl;
        }
    }

    return 0;
}
