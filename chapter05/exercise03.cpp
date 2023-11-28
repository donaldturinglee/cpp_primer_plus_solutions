#include <iostream>

using namespace std;

int main() {

    int num;
    int sum = 0;
    do {
        cout << "Enter a number: ";
        cin >> num;
        sum = sum + num;
        if (num)
            cout << "The current cumulative sum of inputs is: " << sum << endl;
    } while (num);

    cout << "Bye~" << endl;

    return 0;
}