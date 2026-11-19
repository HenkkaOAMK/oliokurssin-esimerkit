#include "henkilo.h"

Henkilo::Henkilo(const string &en, const string &sn, const string &ka, const string &po, const string &kau):enimi(en),snimi(sn)
{
    //cout<<"luotiin henkilo "<<e<<" "<<s<<endl;
    objOsoite=make_unique<Osoite>(ka, po, kau);

}

void Henkilo::tulostaTiedot()
{
    cout<<enimi<<" "<<snimi<<"  Osoite";
    objOsoite->tulostaOsoite();
}
