
#include <iostream>

using namespace std;


int main()
{
    const int HOURS_NEEDED_FOR_ONE_PROJECT = 3;
    
    string architecktName;
    cin >> architecktName;
    
    int projectsCount;
    cin >> projectsCount;
    
    // PRESMIATAME
    
    int neededHours = HOURS_NEEDED_FOR_ONE_PROJECT * projectsCount;
    
    cout << "The architect " << architecktName << " will need " << neededHours << " hours to complete " << projectsCount << " project/s." << endl;

    return 0;
}



//"The  architect  {името на архитекта}  will  need  {необходими часове}  hours  to  complete {брой на проектите} project/s."