#include <iostream>
using namespace std;

void fillArray(int* arr, const int size) {
     for (int i = 0; i < size; i++) {
          *(arr + i) = rand() % 11;
     }
}

void showArray(const int* const arr, const int size) {
     cout << "\nshowArray()\n&arr = " << &arr << "\t\tarr = " << arr << "\t\t*arr = " << *arr << "\t\t";
     for (int i = 0; i < size; i++) {
          cout << *(arr + i) << '(' << arr + i << ") ";
     }
     cout << "\n";
}

void pushBack(int*& arr, int& size, const int value) {
     int* tmpArr = new int[(size + 1)] {};
     for (int i = 0; i < size; i++) {
          *(tmpArr + i) = *(arr + i);
     }
     *(tmpArr + size) = value;
     size++;
     delete[] arr;
     arr = tmpArr;
}

int main() {
     int size = 10;
     int* arr = new int[size] {};
     fillArray(arr, size);
     showArray(arr, size);
     pushBack(arr, size, 10);
     showArray(arr, size);
     delete[] arr;
     return 0;
}