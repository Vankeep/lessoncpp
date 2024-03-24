#include <iostream>
using namespace std;

void printArr(const int* const arr, const int size) {
     cout << "Adres link = " << &arr << "\tAdres first element = " << arr << '\t';
     for (int i = 0; i < size; i++) {
          cout << *(arr + i) << '\t';
     }
     cout << endl;
}

void newArr(int** val, const int size) {
     delete[] * val;
     *val = new int[size] {};
     for (int i = 0; i < size; i++) {
          *(*val + i) = rand() % 12;
     }
}

int main() {
     int* arr = new int[3] {12, 4, 3};
     printArr(arr, 3);
     newArr(&arr, 3);
     printArr(arr, 3);
     delete[] arr;
     arr = nullptr;
     return 0;
}