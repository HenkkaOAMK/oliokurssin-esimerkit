#include <iostream>
#include "animal.h"
#include "dog.h"
#include <memory>
using namespace std;

int main()
{
    Animal objAnimal;
    objAnimal.callOut();

    Dog objDog;
    objDog.callOut();

    unique_ptr<Animal> objDog2 = make_unique<Dog>();
    objDog2->callOut();



    return 0;
}
