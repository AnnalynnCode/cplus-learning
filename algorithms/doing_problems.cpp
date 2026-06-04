#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    // dynamic array since vector is not allowed
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // sort in ascending order for greedy strategy
    sort(a, a + n);

    int day = 1;  // start from day 1 (need 1 problem)
    for (int i = 0; i < n; ++i) {
        if (a[i] >= day) {
            ++day;  // use this set for current day, move to next day
        }
    }

    cout << day - 1;
    delete[] a;
    return 0;
}
