#include <iostream>

using namespace std;

int temperatureConversion(int temperature) {
    return (temperature * 1.0) * 1.8 + 32.0;
}

int main() {

    int temperature;

    cout << "Please enter a Celsius value: ";
    cin >> temperature;
    cout << temperature << " degrees Celsius is " << temperatureConversion(temperature) << " degrees Fahrenheit." << endl;

    return 0;
}