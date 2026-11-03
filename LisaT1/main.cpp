#include <iostream>
#include"car.h"
#include<memory> //tämä tarvitaan smartpointteria varten

using namespace std;


/*
 * Luo luokka Car, jolla on seuraavat yksityiset attribuutit: string make,
 * string model ja int year. Kirjoita konstruktori, joka alustaa nämä attribuutit,
 * ja metodi void display(), joka tulostaa auton tiedot.
 */

int main()
{
    //Luodaan olio pinoon
    Car objCar1("Audi", "A4", 2023);
    objCar1.display();

    //luodaan olio kekoon raakapointterilla
    Car *objCar2=new Car("Nissan", "GT-R", 2010);
    objCar2->display();
    //tällä tavalla luotu olio on tuhottava
    delete objCar2; //eli tämä ja alempi pitää aina tehdä tätä keinoa käyttäessä
    objCar2=nullptr;

    //luodaan olio kekoon smartpointterilla
    unique_ptr<Car> objCar3=make_unique<Car>("Volvo", "X40", 2020);
    objCar3->display();



    return 0;
}
