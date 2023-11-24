#include <iostream>

using namespace std;

int main() {
    const double factor = 12;
    const double inches_per_meter = 0.0254;
    const double pounds_per_kg = 2.2;

    double BMI, feet, inches, pounds;
    
    cout << "Enter your height (in feet and inches): ";
    cin >> feet >> inches;

    cout << "Enter your weight (in pounds): ";
    cin >> pounds;

    inches = inches + (feet * factor);

    double meters, kgs;
    meters = inches * inches_per_meter;
    kgs = pounds / pounds_per_kg;

    BMI = kgs / (meters * meters);

    cout << "Your BMI is " << BMI << endl; 

    return 0;
}