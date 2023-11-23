#include <iostream>

using namespace std;

int conversion(double light_years) {
    return light_years * 63240;
}

int main() {
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << conversion(light_years) << " astronomical units." << endl;
    return 0;
}