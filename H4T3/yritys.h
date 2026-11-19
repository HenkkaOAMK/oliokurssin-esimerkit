#ifndef YRITYS_H
#define YRITYS_H
#include<iostream>
#include"henkilo.h"
#include<vector>
#include<memory>

using namespace std;

class Yritys
{
private:
    vector<unique_ptr<Henkilo>> henkilolista;
    string nimi;
    string toimiala;
public:
    Yritys();
    Yritys(const string &ni, const string &to);
    void tulostaYrityksenTiedot();
    void tulostaYrityksenHenkilot();
};

#endif // YRITYS_H
