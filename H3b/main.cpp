#include <iostream>
#include "animal.h"
#include "dog.h"
#include <memory> //EXTRAA
using namespace std;

int main()
{
    Animal objAnimal;
    objAnimal.callOut();

    Dog objDog;
    objDog.callOut();

    //EXTRA ALKAA
    unique_ptr<Animal> objDog2 = make_unique<Dog>();
    objDog2->callOut();



    return 0;
}
