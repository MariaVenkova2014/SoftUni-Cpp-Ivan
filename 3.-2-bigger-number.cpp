
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    // if (num1 > num2) {
       // cout << num1;
        
    // } else {
      //  cout << num2;
    //}
// ТЕРНАРЕН ОПЕРАТОР
// if - else след ? -thrue  след : falce
    cout << ( num1 > num2 ? num1 : num2 );

    
    return 0;
}