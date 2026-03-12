#include <iostream>
#include <string.h>

using namespace std;

// argc -> Guarda quantidade de parâmetros (0,1,2,3,4,5,6...)
// argv -> Uma matriz, guarda todos os parâmetros

int main(int argc, char *argv[]) {

    if (argc > 1) {
        if (!strcmp(argv[1], "sol")) {
            cout << "Ta no sol, né?";
        }
        else if (!strcmp(argv[1], "noite")) {
            cout << "Ta dormingo, né?";
        }
    }

    return 0;
}