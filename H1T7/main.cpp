#include <iostream>

using namespace std;
/*Tee ohjelma, jossa on main-funktio ja funktio nimeltä tuplaa().
 * Funktio ei palauta mitään vaan kaksinkertaistaa sille argumenttina annetun
 * luvun arvon (eli argumenttina onkin muuttujan osoite).
 * Huomaa: sinun on käytettävä osoitinta. Tulosta mainissa alkuperäinen luku,
 * kutsu tuplaa funktiota ja tulosta muuttujan uusi arvo.
 */

void tuplaa(int a);
void tuplaa_2(int *a);

int main()
{
    int a;
    cout << "Anna luku" << endl;
    cin>>a;
    tuplaa(a);
    cout<<"Mainissa a="<<a<<endl;
    tuplaa_2(&a);
    cout<<"Nyt Mainissa a="<<a<<endl;
    return 0;
}

void tuplaa(int a){
    /*
     * Tämä funktio luo uuden muuttujan a,
     * joka on siis eri kuin mainissa oleva a
     */
    a=2*a;
    cout<<"funktiossa tuplaa a="<<a<<endl;
}

void tuplaa_2(int *a){ //pointteri, osoitin muuttuja
    /*
     * tämä funktio saa mainissa olevan muutuja a osoitteen
     * ja s emuokkaa tuon muistipaikan sisältöä
     */
    *a=*a*2;
}
