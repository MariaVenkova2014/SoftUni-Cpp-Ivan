
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    
    // Проверка четно или нечетно число 
    
    if ( number % 2 == 0 ) { // модулно деление!
        cout << "even";
        
    } else {
        cout << "odd";
    }
    
    return 0;
}