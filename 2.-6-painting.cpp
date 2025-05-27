
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  // Необходимо количество найлон (в кв.м.) - цяло число в интервала [1... 100]
  int nylon;
  
  // Необходимо количество боя (в литри) - цяло число в интервала [1…100]
  int paint ;
  
  // Количество разредител (в литри) - цяло число в интервала [1…30]
  int thinner;
  
  // Часовете, за които майсторите ще свършат работата - цяло число в интервала [1…9]
  int workHours;
  
  
  cin >> nylon >> paint >> thinner >> workHours;
  
  // презпасяваме се и накрая добавяме 0,4 за торчики
  
  double materialCosts = (nylon + 2) * 1.5 + (1.1 * paint * 14.50) + (thinner * 5) + 0.4;
  
  double labourCosts = 0.3 * materialCosts * workHours;
  
  double totalCosts = materialCosts + labourCosts;
  
  cout << totalCosts << endl;
  
  
    return 0;
}