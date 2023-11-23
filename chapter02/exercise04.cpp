#include <iostream>

using namespace std;

int main() {
    int age;
    int months;

    cout << "Enter your age: ";
    cin >> age;
    months = age * 12;
    cout << "You are live " << months << " months" << endl;

    return 0;
}