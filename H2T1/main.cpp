#include "henkilo.h"

#include <iostream>

using namespace std;
/*
 * Luo luokka nimeltä Henkilo, jolla on kaksi julkista
 * jäsenmuuttujaa: nimi (merkkijono) ja ika (kokonaisluku).
 * Luo pääohjelmassa yksi Henkilo-olio, aseta sen tiedot ja tulosta ne.
 *
 * Vihje: Älä tee metodeja (Getter ja Setter) vielä, vaan aseta arvot suoraan
 * jäsenmuuttujille (Huono tapa).
 */
int main()
{
    Henkilo objectHenkilo;
    objectHenkilo.ika=33;
    objectHenkilo.nimi="Teppo";
    cout<<"Nimi="<<objectHenkilo.nimi<<" ja ika="<<objectHenkilo.ika<<endl;
    return 0;
}
