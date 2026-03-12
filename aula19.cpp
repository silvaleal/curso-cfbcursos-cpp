#include <iostream>

using namespace std;

int main() {

    int linhas = 3;
    int colunas = 4;

    int myMatriz[linhas][colunas];

    myMatriz[0][0] = 0;
    myMatriz[0][1] = 0;
    myMatriz[0][2] = 1;
    myMatriz[0][3] = 1;

    for (int nowMatriz : myMatriz[0]) {
        cout << nowMatriz;
    }

    return 0;
}