#include "yritys.h"

Yritys::Yritys() {}

Yritys::Yritys(const string &ni, const string &to)
{
    nimi=ni;
    toimiala=to;
    henkilolista.emplace_back(make_unique<Henkilo>("Viljo", "Virtanen", "Mannerheimintie 2", "00100", "Helsinki"));
    henkilolista.emplace_back(make_unique<Henkilo>("Aino", "Joki", "Mannerheimintie 5", "00100", "Helsinki"));
    henkilolista.emplace_back(make_unique<Henkilo>("Liisa", "Meri", "Mannerheimintie 69", "00100", "Helsinki"));

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
