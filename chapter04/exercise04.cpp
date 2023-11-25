#include <iostream>
#include <string>

using namespace std;

int main() {

    string first_name, last_name;
    string full_name;

    cin.getline(first_name);
    cin.getline(last_name);

    full_name = first_name + last_name;

    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}