#include "henkilo.h"

#include <iostream>

using namespace std;
/*
 * T2_2
 * Tee edellisen esimerkin luokka niin, että jäsenmuuttujat
 * ovat privaatteja ja tee niille Getterit ja Setterit.
 * Lisää Henkilo-luokkaan metodi tulostaTiedot(),
 * joka tulostaa henkilön nimen ja iän.
 * Kutsu metodia pääohjelmassa luodulle oliolle.
 *
 * T2_3
 * Lisää Henkilo-luokkaan konstruktori, joka ottaa
 * parametrina nimen ja iän ja asettaa ne jäsenmuuttujille.
 * Luo olio käyttämällä tätä konstruktoria ja tulosta
 * sen tiedot metodin avulla.
 * Vihje: Konstruktori määritellään ilman paluuarvoa, ja
 * sillä tulee olla sama nimi kuin luokalla.
 */

int main()
{
    Henkilo objHenkilo1;
    objHenkilo1.setNimi("Teppo Testi");
    objHenkilo1.setIka(34);
    Henkilo objHenkilo2;
    objHenkilo2.setNimi("Liisa Virtanen");
    objHenkilo2.setIka(25);
    //cout<<objHenkilo1.getNimi(); //Tulostaisi vain nimen
    objHenkilo1.tulostaTiedot();
    objHenkilo2.tulostaTiedot();

    Henkilo objHenkilo3("Aino Joki", 42);
    objHenkilo3.tulostaTiedot();

    return 0;
}
