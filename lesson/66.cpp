#include <iostream>
#define PI 3.14
#define TAB '\t'

#define FOO(x, y) ((x)*(y)) // Это макрос

using namespace std;


/*
Деректива предпроцессора define
Макросы define
*/

int main() {
     int pi = PI;

     cout << pi << endl;

     cout << "Hi" << TAB << "kek" << endl;

     cout << FOO(2, 3) << endl;  // Это макрос, чет типо функции, хз зачем эта шняга

     return 0;
}
// Console:
// 3
// Hi	kek
// 6