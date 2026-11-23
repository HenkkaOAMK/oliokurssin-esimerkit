#include <iostream>

using namespace std;
void asetaNollaksi(int *luku);
void kasvata(int &luku);
int tuplaa(int luku);

int main()
{
    //Tehtävä 1
    int x=42;
    int *pointerX; //luodaan pointteri, jolla voi osoittaa kokonaslukumuuttujaan
    pointerX= &x; //pointter osoittaa muutujaan x
    cout<<"Muuttujan x arvo = "<<x<<endl;
    cout<<"Muuttujan x arvo = "<<*pointerX<<endl;
    cout<<"Muuttujan x osoite = "<<pointerX<<endl;

    //Tehtävä 2
    asetaNollaksi(&x);
    cout<<"Muuttujan x arvo = "<<x<<endl;

    //Tehtävä 3
    kasvata(x);
    cout<<"Muuttujan x arvo = "<<x<<endl;

    //Palautusarvolla
    x = tuplaa(x);
    cout<<"Muuttujan x arvo = "<<x<<endl;

    return 0;
}

//Tehtävä 2
void asetaNollaksi(int *luku){
    *luku=0;
}

//Tehtävä 3

void kasvata(int &luku){
    luku++;
}

//Palautusarvolla
int tuplaa(int luku){
    return 2*luku;
}
