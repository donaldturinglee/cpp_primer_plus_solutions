#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calorie;
};

int main() {
    CandyBar* snack = new CandyBar[3];

    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Big Rabbit", 5, 300};
    snack[2] = {"Joy Boy", 4.1, 430};

    for (int i = 0; i < 3; ++i) {
        cout << "The name of the CandyBar: " << snack[i].brand << endl;
        cout << "The weight of the CandyBar: " << snack[i].weight << endl;
        cout << "The calorie of the CandyBar: " << snack[i].calorie << endl;
        cout << endl;
    }

    delete[] snack;

    return 0;
}