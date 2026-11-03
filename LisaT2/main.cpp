#include <iostream>
#include "car.h"
/*Muokkaa Car-luokkaa edellisestä tehtävästä lisäämällä getter- ja setter-metodit
 * jokaiselle attribuutille. Varmista, että asetettu data on validia (esim.
 * vuoden tulee olla suurempi kuin 1885).
 */
using namespace std;

int main()
{
    Car objCar=Car("Volvo", "X40", 2023);

    cout<<objCar.getMake()<<", "<<objCar.getModel()<<", " <<objCar.getYear()<<endl;
    return 0;
}
