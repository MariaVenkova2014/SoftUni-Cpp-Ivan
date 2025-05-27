
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   // Брой пакети химикали - цяло число в интервала [0...100]
   int pens;
   
   // Брой пакети маркери - цяло число в интервала [0...100]
   int markers;
   
   // Литри препарат за почистване на дъска - цяло число в интервала [0…50]
   int cleaningAgent;
   
   // Процент намаление - цяло число в интервала [0...100] - 0.01 * 25%
   int  discontPercentage;
   
   cin >> pens >> markers >> cleaningAgent >> discontPercentage;
   
    double costs = pens * 5.80 + markers * 7.20 + cleaningAgent * 1.20;
    double discount = 0.01 * 25 * costs;
    
    double result = costs - discount;
    
    cout << result;
    
    return 0;
}