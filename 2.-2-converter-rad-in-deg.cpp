
#define _USE_MATH_DEFINES // добавя се за да се достъпи ПИ

#include <iostream>
#include <math.h> // добавя се заради закръглянето

using namespace std;

int main()
{
    double radians;
    cin >> radians;
    
    double degrees = round ( radians * 180 / M_PI ); // M_PI - Macros
    
    cout << degrees << endl;

    return 0;
}