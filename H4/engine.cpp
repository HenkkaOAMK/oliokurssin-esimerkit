#include "engine.h"

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int hp)
{
    horsepower = hp;
}

double Engine::getDisplacement() const
{
    return displacement;
}
void Engine::setDisplacement(double disp)
{
    displacement = disp;
}

Engine::Engine() {}

Engine::Engine(int hp, double disp)
{
    horsepower=hp;
    displacement=disp;
}
