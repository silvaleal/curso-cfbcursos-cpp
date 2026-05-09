#include <iostream>
#include <string>
#include "externos/aula45.h"

using namespace std;

int main() {

    FlyAnimal passaro("Ralber", 200);

    passaro.setOwner("silvaleal");

    cout << passaro.name << endl;

    cout << passaro.getOwner();

    return 0;
}