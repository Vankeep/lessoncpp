#include <iostream>
using namespace std;


int main() {
     int a = 5;
     int* pa = &a;
     int& aRef = a;

     cout << "a = \t\t" << a << endl;
     cout << "&a = \t" << &a << endl;
     cout << "pa = \t" << pa << endl;
     cout << "*pa = \t" << *pa << endl;
     cout << "aRef = \t" << aRef << endl;
     cout << "&aRef = \t" << &aRef << endl;
     return 0;
}
// Консоль:
// a = 		5
// &a = 	0xf0123ffa3c
// pa = 	0xf0123ffa3c
// *pa = 	5
// aRef = 	5
// &aRef = 	0xf0123ffa3c