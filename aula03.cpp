#include <iostream>
#include <string>

using namespace std;

int main () {
    int age;
    string name;

    // console output
    cout << "Your age: ";
    // console input
    cin >> age;
    cout << "Your name: ";
    cin >> name;

    cout << "Hello, " << name << " you have " << age <<"y";

    cout << "\n";
    system("pause");

    return 0;
}