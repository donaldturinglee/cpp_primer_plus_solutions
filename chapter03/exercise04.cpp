#include <iostream>

using namespace std;

int main() {
    const int day_per_hours = 24;
    const int hour_per_minutes = 60;
    const int minute_per_seconds = 60;
    
    int days, hours, minutes;
    long long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    days = seconds / minute_per_seconds / hour_per_minutes / day_per_hours;
    hours = seconds / hour_per_minutes / minute_per_seconds % day_per_hours;
    minutes = seconds / minute_per_seconds % minute_per_seconds;
    seconds = seconds % 60;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}