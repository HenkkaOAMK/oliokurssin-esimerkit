#include "yritys.h"

Yritys::Yritys() {}

Yritys::Yritys(const string &ni, const string &to)
{
    nimi=ni;
    toimiala=to;
    henkilolista.emplace_back(make_unique<Henkilo>("Viljo", "Virtanen"));
    henkilolista.emplace_back(make_unique<Henkilo>("Aino", "Joki"));
    henkilolista.emplace_back(make_unique<Henkilo>("Liisa", "Meri"));

}

void Yritys::tulostaYrityksenTiedot()
{
    cout<<nimi<<" toimiala: "<<toimiala<<endl;
}

void Yritys::tulostaYrityksenHenkilot()
{
    cout<<"Henkilot: "<<endl;
    //for (const unique_ptr<Henkilo> &obj: henkilolista){
    //    obj->tulostaTiedot();
    //}

    //auto sanalla
    for(auto &objA: henkilolista){
        objA->tulostaTiedot();
    }
}
