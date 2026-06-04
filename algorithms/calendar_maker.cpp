#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Days in each month of 2025 (1-indexed)
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Weekday of the 1st day of each month in 2025 (1=Mon, 7=Sun)
    int first_weekday[] = {0, 3, 6, 6, 2, 4, 7, 2, 5, 1, 3, 6, 1};

    int m;
    cin >> m;

    // Print header
    cout << "MON TUE WED THU FRI SAT SUN" << endl;

    int days = days_in_month[m];
    int start = first_weekday[m];  // Weekday of the 1st

    // Pad blank columns before the 1st day
    int pos = 1;
    for (int i = 1; i < start; i++) {
        cout << "    ";
        pos++;
    }

    // Print each day
    for (int d = 1; d <= days; d++) {
        cout << setw(4) << d;
        if (pos == 7) {
            cout << endl;
            pos = 1;
        } else {
            pos++;
        }
    }

    // Trailing newline if the last day isn't Sunday
    if (pos != 1) {
        cout << endl;
    }

    return 0;
}
