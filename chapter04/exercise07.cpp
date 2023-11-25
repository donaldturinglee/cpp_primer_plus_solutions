#include <iostream>
#include <string>

using namespace std;

struct Pizza {
    string company;
    double diameter;
    double weight;
};

int main() {

    Pizza pizza;

    cout << "Enter the pizza company: ";
    getline(cin, pizza.company);

    cout << "Enter the diameter of pizza: ";
    cin >> pizza.diameter;

    cout << "Enter the weight of pizza: ";
    cin >> pizza.weight;

    cout << "Here's the pizza information: " << endl;
    cout << "Company: " << pizza.company << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;

    return 0;
}