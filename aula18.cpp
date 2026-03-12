#include <iostream>

using namespace std;

int main() {
    string names[] = {"Joao", "Jose", "Rodolfo"};

    names[1] = "Sabrina";

    // cout << names[0];
    // cout << names[1];
    // cout << names[2];

    for (string name : names) {
        cout << name << "\n";
    }

    return 0;
}