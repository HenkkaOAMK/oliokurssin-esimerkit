#include <iostream>

using namespace std;

int main()
{
    int number=55;
    int *pointer;

    pointer=&number;
    cout << "Muuttujan number arvo = "<<number<< endl;
    cout << "Muuttujan number osoite = "<<&number<< endl;
    //printf("Muuttujan number osoite =%d\n", &number);

    cout << "*pointer arvo = "<<*pointer<< endl;
    cout << "*pointer osoite = "<<pointer<< endl;

    return 0;
}
