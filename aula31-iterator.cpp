#include <iostream>
#include <list>

using namespace std;

// TODO: Não escrito

int main() {

    list<int> aula;
    int size = 10;

    for (int i=0; i<size; i++ ) {
        // aula.push_front(i);
        aula.push_back(i);
    }

    for (int item : aula) {
        // cout << "Item:" << item << endl;
        cout << aula.front();
        aula.pop_front();
    }
    
    return 0;
}