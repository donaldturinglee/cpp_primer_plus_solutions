#include <iostream>

using namespace std;

int main() {

    const double km_per_miles = 0.6214;
    const double gallon_per_litres = 3.875;

    double fuel_comsuption_en;
    cout << "Enter the fuel comsuption in European standard: ";
    cin >> fuel_comsuption_en;

    double fuel_comsuption_us = (100 * km_per_miles) / (fuel_comsuption_en / gallon_per_litres);
    cout << "The fuel comsuption in US standard is " << fuel_comsuption_us << " m/g" << endl;

    return 0;
}