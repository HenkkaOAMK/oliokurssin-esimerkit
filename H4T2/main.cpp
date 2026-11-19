#include <iostream>
#include "henkilo.h"
using namespace std;

int main()
{
    Henkilo objHenkilo("Teppo Testi", "Iskatu 4", "90100", "Oulu");
    objHenkilo.tulostaTiedot();

    Henkilo *objHenkilo2=new Henkilo("Mauno Mainio", "Iskatu 4", "90100", "Oulu");
    objHenkilo2->tulostaTiedot();
    delete objHenkilo2;
    objHenkilo2=nullptr;
    return 0;
}
