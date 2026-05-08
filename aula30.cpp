#include <iostream>
#include <queue>

// Fila / Queue
// O primeiro a entrar, é o último a sair

/*
empty,
size
front
back
push
pop
*/

using namespace std;

int main() {

    queue<int> playerIDS;

    playerIDS.push(1);
    playerIDS.push(2);
    playerIDS.push(3);

    cout << "Primeiro: "<< playerIDS.front() << endl;
    cout << "Ultimo: "<< playerIDS.back() << endl;

    return 0;
}