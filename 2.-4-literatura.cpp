
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // ЦЯЛОЧИСЛЕНО ДЕЛЕНИЕ - резултата се очква да е цяло число
    
    // Брой страници в текущата книга – цяло число в интервала [1…1000]
    int totalPages;
    // Страници, които прочита за 1 час – цяло число в интервала [1…1000]
    int pagesPerHour;
    // Броят на дните, за които трябва да прочете книгата – цяло число в интервала [1…1000]
    int days;
    
    cin >> totalPages >> pagesPerHour >> days;
    
    int totalNeededHours = totalPages / pagesPerHour;
    int result = totalNeededHours / days;
    
    cout << result;
    
    return 0;
}

