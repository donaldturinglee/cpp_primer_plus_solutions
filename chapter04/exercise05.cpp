#include <iostream>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calorie;
};

int main() {

    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "CandyBar brand is: " << snack.brand << endl;
    cout << "CandyBar weight is: " << snack.weight << endl;
    cout << "CandyBar calorie is: " << snack.calorie << endl;

    return 0;
}