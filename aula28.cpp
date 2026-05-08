#include <iostream>
#include <stack> // Incluindo a biblioteca de stack.

using namespace std;

// Pilha
// O último que sai é o primeiro a sair.

int main() {

    stack<int> playerIDs;

    playerIDs.push(10); // Adicionando na último posição
    playerIDs.push(22);
    playerIDs.push(33);

    cout << "Tamanho:" << playerIDs.size() << "\n";

    cout << playerIDs.top() << "\n"; // Imprimindo o último item que entrou e o primeiro que sai

    playerIDs.pop(); // Removendo o último item que entrou

    cout << "Tamanho:" << playerIDs.size() << "\n";

    return 0;
}