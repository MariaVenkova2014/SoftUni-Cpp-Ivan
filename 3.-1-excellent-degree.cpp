
#include <iostream>

using namespace std;


int main()
{
   const double EXELLENT_GRADE_MIN = 5.50;
   double grade;
   cin >> grade;
   
   if (grade >= EXELLENT_GRADE_MIN) {
       
       cout << "Excellent!" << endl;
     } else {
         
         cout << "Grade is not exellent"; 
     }

    return 0;
}