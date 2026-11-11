#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Nissan", "350Z", 2006);
    carList.emplace_back("Ford", "Mustang GT", 2010 );
    carList.emplace_back("Audi", "A4", 2023);

    cout << "Second car: "<<endl;
    cout << endl;
    carList[1].printData();

    cout << endl;
    cout << "All cars: "<<endl;
    cout << endl;

    for (int i = 0; i < carList.size(); i++)
    {

        carList[i].printData();

    }


    return 0;
}
