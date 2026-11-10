#include <iostream>
#include"car.h"
#include"rectangle.h"
#include"student.h"
#include<memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Nissan");
    objCar.setModel("350Z");
    objCar.setYearModel(2006);
    objCar.printData();

    cout<<"********************"<<endl;

    Rectangle *objRect = new Rectangle();
    objRect->setWidth(5.5);
    objRect->setHeight(6.9);
    cout<<"Area: "<<objRect->getArea()<<endl;
    cout<<"Circumference: "<<objRect->getCircum()<<endl;

    delete objRect;
    objRect=nullptr;

    cout<<"********************"<<endl;

    unique_ptr<Student> objStud = make_unique<Student>();
    objStud->setName("Henri");
    objStud->setStudentNumber(777);
    objStud->setAverage(4.95);
    cout<<"Name: "<<objStud->getName()<<endl;
    cout<<"Student Number: "<<objStud->getStudentNumber()<<endl;
    cout<<"Average: "<<objStud->getAverage()<<endl;

    cout<<"********************"<<endl;

    return 0;
}
