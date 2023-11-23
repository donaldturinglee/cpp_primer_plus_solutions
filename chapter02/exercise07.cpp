#include <iostream>

using namespace std;

void timeConversion(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main() {

    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    timeConversion(hours, minutes);

    return 0;
}