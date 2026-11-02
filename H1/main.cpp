#include <iostream>
#include "calculations.h"
#include <iomanip>

using namespace std;

int main()
{
    int a;
    int b;

    cout<<fixed<<setprecision(2);

    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << a << " + " << b << " = " << retSum(a, b) <<endl;

    float result;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " <<result << endl;
    }

    catch (runtime_error& e) {
        cout << "Error: " << e.what()<<endl;
    }

    return 0;
}
