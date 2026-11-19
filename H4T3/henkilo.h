#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>

using namespace std;

class Henkilo
{
private:
    string enimi;
    string snimi;
public:
    Henkilo(string, string);
    void tulostaTiedot();
};

#endif // HENKILO_H
