#include <iostream>

using namespace std;

/*
 * Esimerkki havainnollistaa try catch rakenteen tarvetta.
 * Sovellus kyselee lukuja, kunnes annetaan luku 999
 * Sovellus lukee käyttäjän syötteen merkkijonona ja muuttaa
 * sen kokonaisuvuksi. Sovllus tulostaa annetun luvun
 * kaksin kertaisena.
 * Merkkijonon muunnos kokonaisluvuksi tehdän täsäs stoi-funktiolla.
 *
 */

int main()
{
    int number=1;
    string word;
    // Tällä versiolla sovellus kaatuu, jos annetaan vahingossa merkkejä.
    // Tai liian iso luku.
    // while(number != 999)
    // {
    //     cout<< "Anna kokonaisluku: ";
    //     cin>>word;
    //     number=stoi(word);
    //     cout<<"Kaksinkertaisena luku= "<<2*number<<endl;
    // }

    while(number != 999)
    {
        cout<<"Anna kokonaisluku: ";
        cin>>word;
        try {
            number=stoi(word);
            cout<<"Kaksinkertaisena luku= "<<2*number<<endl;
        } catch (...) {
            cout<<"Jokin meni vikaan"<<endl;

        }
    }
    return 0;
}
