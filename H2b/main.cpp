#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.push_back(Car("Nissan", "350Z", 2006));
    carList.push_back(Car("Ford", "Mustang GT", 2010 ));
    carList.push_back(Car("Audi", "A4", 2023));

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
