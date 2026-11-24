#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int s)
{
    size = s;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &t)
{
    type = t;
}

Wheel::Wheel() {}

Wheel::Wheel(int s, string t)
{
    size=s;
    type=t;
}
