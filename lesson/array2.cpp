// Показатель того что в параметрах фунции указатель это новыя переменная со своим адресом.
// Консоль:
// showArray()
// &arr = 0xc396bffdf0		arr = 0x2445a1d2560		8(0x2445a1d2560) 9(0x2445a1d2564) 9(0x2445a1d2568) 1(0x2445a1d256c) 7(0x2445a1d2570) 

// main()
// &arr = 0xc396bffe10		arr = 0x2445a1d2560		8(0x2445a1d2560) 9(0x2445a1d2564) 9(0x2445a1d2568) 1(0x2445a1d256c) 7(0x2445a1d2570) 
#include <iostream>
#define SIZE 5
using namespace std;

void fillArray(int* arr) {
     for (int i = 0; i < SIZE; i++) {
          *(arr + i) = rand() % 11;
     }
}

void showArray(int* arr) {
     cout << "\nshowArray()\n&arr = " << &arr << "\t\tarr = " << arr << "\t\t";
     for (int i = 0; i < SIZE; i++) {
          cout <<*(arr + i) << '(' << arr + i << ") ";
     }
     cout << "\n";
}


int main() {
     int* arr = new int[SIZE] {};
     fillArray(arr);
     showArray(arr);
     cout << "\nmain()\n&arr = " << &arr << "\t\tarr = " << arr << "\t\t";
     for (int i = 0; i < SIZE; i++) {
          cout <<*(arr + i) << '(' << arr + i << ") ";
     }
     return 0;
}