#include <iostream>
#include <array>

using namespace std;

int main() {

    array<int, 3> result;
    int sum = 0;
    cout << "Enter three result of the 40 meters runing time: ";
    
    for (int i = 0; i < 3; ++i) {
        cin >> result[i];
        sum = sum + result[i];
    }

    double avg_result = sum / 3;

    cout << "The all three time results are: ";
    for (int i = 0; i < 3; ++i) {
        cout << result[i];
        if (i < 2)
            cout << ", ";
    }
    cout << endl;

    cout << "The average result: " << avg_result << endl;

    return 0;
}