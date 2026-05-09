#ifndef AULA45_H_INCLUDED
#define AULA45_H_INCLUDED

#include <string>

using namespace std;

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

#endif // AULA45_H_INCLUDED