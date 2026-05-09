#incluide <iostream>

using namespace std;

struct Car {
    string name;
    string color;
    int pot;
    int velMax;
};

int main() {

    Car fusca;

    fusca.name = "Fusca";
    fusca.color = "yellow";
    fusca.pot = 10;
    fusca.velMax = 50;

    return 0;
}