#include <iostream>

using namespace std;

int main() {

    int x, y;
    int sum = 0;

    cout << "Enter a begin number: ";
    cin >> x;

    cout << "Enter an end number: ";
    cin >> y;

    for (int i = x; i <= y; ++i) {
        sum = sum + i;
    }

    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;

    return 0;
}