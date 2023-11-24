#include <iostream>

using namespace std;

int main() {

    const int degree_per_minutes = 60;
    const int minute_per_seconds = 60;

    double degrees, minutes, seconds;
    double latitude;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    
    cout << "First, enter the degrees: ";
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    latitude = degrees + minutes / degree_per_minutes + seconds / minute_per_seconds / degree_per_minutes;

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees" << endl;
    
    return 0;
}