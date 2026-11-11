#include "car.h"

Car::Car(string b, string m, int y)
{
    brand =b;
    model=m;
    yearModel=y;
}

void Car::printData()
{
    cout<<"********************"<<endl;
    cout << "Brand: "<<brand<<endl;
    cout << "Model: "<<model<<endl;
    cout << "Year model: "<<yearModel<<endl;
    cout<<"********************"<<endl;
}
