#include <iostream>

using namespace std;

int main() {

    int mile, gallon;
    
    cout << "Enter travel distance by car: ";
    cin >> mile;

    cout << "Enter amount of gasoline used: ";
    cin >> gallon;

    cout << "Your car fuel consumption is: " << double(mile) / double(gallon) << " m/g" << endl;

    return 0;
}