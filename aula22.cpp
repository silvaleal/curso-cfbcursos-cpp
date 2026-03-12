#include <iostream>

using namespace std;

// Criando função
void funcaoSemRetorno() {
    cout << "silvaleal";
}

void somar() {
    cout << "R: " << 1 + 2;
}

int somar(int n1,  int n2) {
    return n1 + n2;
}

// Sobrecarga de funções, é quando eu crio dois funções com o mesmo nome, porém com parâmetros diferentes.

int main() {
    funcaoSemRetorno();

    somar();
    
    // int result = somar(10, 20);

    // cout << "Soma: " << result;
    return 0;   
}