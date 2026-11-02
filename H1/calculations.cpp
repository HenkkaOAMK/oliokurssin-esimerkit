#include<iostream>
#include "calculations.h"
#include<stdexcept>

using namespace std;

void calcSum(int a, int b)
{
    cout<< a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b==0)
    {
        cout<< "Jakaja ei saa olla nolla!" << endl;
    }
    else
    {
        cout<< a << " / " << b << " = " << (float)a / (float)b << endl;
    }

}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b==0)
    {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / float (b);
}
