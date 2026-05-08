#include <iostream>

using namespace std;

int main() {

    enum armas{
        FUZIL=100,
        REVOLVER=6,
        RIFLE=100,
        ESCOPETA=25
    };

    armas armaSel = FUZIL;

    cout << armaSel;

    return 0;
}