#include "account.h"

Account::Account(string ac):accountNumber(ac) {}

void Account::deposit(double de)
{
    balance+=de; //balanceen lisätään de
}

void Account::withdraw(double wi)
{
    if(balance>=wi){
        balance-=wi;
    }
    else{
    cout<<"Tilillä ei tarpeeksi rahaa"<<endl;
    }
}

void Account::displayInfo()
{
    cout<<"Tilinumero= "<<accountNumber<<" saldo= "<<balance<<endl;
}
