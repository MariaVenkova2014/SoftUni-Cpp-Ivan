
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    
    double amount; // Депозирана сума – реално число в интервала [100.00 … 10000.00]
    int termInMounts; // Срок на депозита (в месеци) – цяло число в интервала [1…12]
    double yearlyInteresedPersentage; // - имаме проценти - Годишен лихвен процент – реално число в интервала [0.00 …100.00]
    
    cin >> amount >> termInMounts >> yearlyInteresedPersentage;
    
    double result = amount + termInMounts*( 0.01 * amount * yearlyInteresedPersentage / 12 ); // умножаваме с 0.01 или делим на 100 - имаме проценти
    
    cout << result;

    return 0;
}