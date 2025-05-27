
#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    
    // Годишната такса за тренировки по баскетбол – цяло число в интервала [0… 9999]
    int tax;
    cin >> tax;
    
    // Каскадност
    
    double shoes = 0.6 * tax; // Баскетболни кецове – цената им е 40% по-малка от таксата за една година 
    double kit = 0.8 * shoes; // Баскетболен екип – цената му е 20% по-евтина от тази на кецовете
    double ball = 0.25 * kit; // Баскетболна топка – цената ѝ е 1 / 4 от цената на баскетболния екип
    double acssesories = 0.2 * ball; // Баскетболни аксесоари – цената им е 1 / 5 от цената на баскетболната топка
    
    double totalCosts = tax + shoes + kit + ball + acssesories; // цената обхваща всичко + tax!
    
    cout << totalCosts << endl;
    
    
    return 0;
}