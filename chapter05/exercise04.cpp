#include <iostream>

using namespace std;

int main() {

    const double rate = 0.05;

    double daphne = 100.0;
    double cleo = 100.0;
    int years = 0;
    while (cleo <= daphne) {
        ++years;

        daphne = daphne + 10;

        cleo = cleo + cleo * rate;

    }

    cout << "After " << years << " Years. " << "Cleo's account is " << cleo << " while more than the one of Daphne whic is " << daphne << "." << endl;

    return 0;
}