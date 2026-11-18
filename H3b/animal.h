#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;


class Animal
{
public:
    Animal();
    virtual ~Animal() = default;
    virtual void callOut();
};

#endif // ANIMAL_H
