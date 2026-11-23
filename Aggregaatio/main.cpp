#include <iostream>
#include "employee.h"
#include <memory>
#include"company.h"

using namespace std;

int main()
{
    shared_ptr<Employee>objE1=make_shared<Employee>("Teppo", "Testi");
    shared_ptr<Employee>objE2=make_shared<Employee>("Liisa", "Joki");
    shared_ptr<Employee>objE3=make_shared<Employee>("Aino", "Meri");

    Company *objC1=new Company("Gigantti");
    Company *objC2=new Company("Power");

    objC1->addEmployee(objE1);
    objC1->addEmployee(objE2);

    objC2->addEmployee(objE1);
    objC2->addEmployee(objE3);

    objC1->printEmployees();
    objC2->printEmployees();

    delete objC1;
    objC1=nullptr;

    //Tehtävässä ei suoriteta seuraavia, mutta ne tulisi olla oikeassa sovelluksessa
    //delete objC2;
    //objC2=nullptr;

    return 0;
}
