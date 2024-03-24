// Показатель того что в параметрах фунции указатель это новыя переменная со своим адресом.
// Консоль:
//
// showArray()
// &arr = 0xee979ff800		arr = 0x259cc050d70		*arr = 8		8(0x259cc050d70) 9(0x259cc050d74) 9(0x259cc050d78) 

// main()
// &arr = 0xee979ff820		arr = 0x259cc050d70		*arr = 8		8(0x259cc050d70) 9(0x259cc050d74) 9(0x259cc050d78) 

#include <iostream>
#define SIZE 3
using namespace std;

void fillArray(int* arr) {
     for (int i = 0; i < SIZE; i++) {
          *(arr + i) = rand() % 11;
     }
}

void showArray(int* arr) {
     cout << "\nshowArray()\n&arr = " << &arr << "\t\tarr = " << arr << "\t\t*arr = " << *arr<< "\t\t";
     for (int i = 0; i < SIZE; i++) {
          cout <<*(arr + i) << '(' << arr + i << ") ";
     }
     cout << "\n";
}


int main() {
     int* arr = new int[SIZE] {};
     fillArray(arr);
     showArray(arr);
     cout << "\nmain()\n&arr = " << &arr << "\t\tarr = " << arr << "\t\t*arr = " << *arr<< "\t\t";
     for (int i = 0; i < SIZE; i++) {
          cout <<*(arr + i) << '(' << arr + i << ") ";
     }
     return 0;
}