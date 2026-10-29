#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>
using namespace std;


class henkilo
{
private:
    string nimi;
    int ika;

public:
    //Henkilo luokan konstruktori on funktio Henkilo()
    //Sillä ei ole koskaan palautusarvon määrittelyä
    //luokalla voi olla useita konstruktoreita (ylikuormittaminen)

    henkilo();

    string getNimi() const;
    void setNimi(const string &newNimi);
    int getIka() const;
    void setIka(int newIka);
    void tulostaTiedot();
};

#endif // HENKILO_H
