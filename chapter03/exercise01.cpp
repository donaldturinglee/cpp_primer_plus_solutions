#include <iostream>

using namespace std;

int main() {
    const double factor = 12;
    double height;

    cout << "Enter your height (in inches): ";
    cin >> height;

    cout << "Your height is " << height / factor << " feets." << endl;

    return 0;
}