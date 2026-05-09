#include <iostream>

using namespace std;

// Quando usamos Setters e Getters, estamos fazendo o encapsulamento.

class FlyAnimal {
    public: 
        int speed=10;
        string name;

        FlyAnimal(string name, int speed) {
            this->name = name;
            this->speed = speed;
        }

        void setOwner(string name) {
            this->ownerName = name;
        }

        string getOwner() {
            return this->ownerName;
        }

    private:
        string ownerName;
};

int main() {

    FlyAnimal passaro("Ralber", 100);

    passaro.setOwner("Silvaleal");

    cout << passaro.speed << endl;
    cout << passaro.name << endl;
    cout << passaro.getOwner() << endl;

    return 0;
}