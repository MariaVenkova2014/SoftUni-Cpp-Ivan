
#include <iostream>

#include <math.h>

using namespace std;


int main()
{
    
    // 1.  Дължина в см – цяло число в интервала [10 … 500]
    // 2.  Широчина в см – цяло число в интервала [10 … 300]
    // 3.  Височина в см – цяло число в интервала [10… 200]
    int width, lenght, high;
    
    // 4.  Процент  – реално число в интервала [0.000 … 100.000] - зает обем от водорасли и пясък и др.
    int takenPercentage;
    
    cin >> width >> lenght >> high >> takenPercentage;
    
    // Да се напише програма, която изчислява литрите вода, която са необходими за напълването на аквариума. 
    
    double volumeInLiters = 0.001 * width * lenght * high; // всичко в литри - * 0.001
    
    double freeVolumeInLiters = volumeInLiters - (0.01 * takenPercentage * volumeInLiters);
    
    cout << freeVolumeInLiters << endl;
    

    return 0;
}