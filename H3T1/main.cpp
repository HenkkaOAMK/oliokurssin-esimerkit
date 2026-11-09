#include <iostream>
#include "henkilo.h"
#include "opiskelija.h"
using namespace std;

int main()
{
    Henkilo objH("Ville Virta", 45);
    Opiskelija objOp;
    objOp.setNimi("Alli Meri");
    objOp.setIka(22);
    objOp.setOpiskelijanumero("T501");

    objH.tulostaTiedot();
    objOp.tulostaTiedot();

    Opiskelija objOp2("Aimo Joki", 33, "A777");
    objOp2.tulostaTiedot();

    return 0;
}





/*Luo luokka Henkilo, jolla on seuraavat jäsenmuuttujat:

nimi (string)
ika (int)
Lisää luokkaan seuraava metodit:

Getterit ja Setterit molemmille jäsenmuuttujille
tulostaTiedot(), joka tulostaa henkilön tiedot.
Luo aliluokka Opiskelija, joka perii Henkilo-luokan.

Lisää aliluokkaan seuraava jäsenmuuttuja:

opiskelijanumero (string)
Luo opiskelijanumerolle Getter ja Setter

Ylikirjoita aliluokassa seuraava metodi:

tulostaTiedot() siten, että se tulostaa myös opiskelijanumeron.
Luo main.cpp:ssä sekä Henkilo-, etta Opiskelija-luokan olio ja tulosta niiden tiedot.

Vihje: Käytä public-perintää ja kutsu tarvittaessa kantaluokan metodia aliluokan metodissa.
*/
