//Показатель того что в параметрах фунции указатель это новыя переменная со своим адресом.

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