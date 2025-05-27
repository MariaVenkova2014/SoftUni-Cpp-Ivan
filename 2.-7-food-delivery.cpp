
#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    // Брой пилешки менюта – цяло число в интервала [0 … 99] x 10.35
    int chicken;
    
    // Брой менюта с риба – цяло число в интервала [0 … 99] x 12.40
    int fisch;
    
    // Брой вегетариански менюта – цяло число в интервала [0 … 99] x 8.15
    int vegetarian;
    
    cin >> chicken >> fisch >> vegetarian;
    
    double price = chicken*10.35 + fisch*12.40 + vegetarian*8.15;
    double dessert = 0.2*price;
    
    double totalCosts =  price + dessert + 2.50; // 
    
    cout << totalCosts << endl;
    
    
    return 0;
}