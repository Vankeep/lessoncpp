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

void popBack(int*& arr, int& size, const int count = 1) {
     int* newArr = new int [size - count] {};
     for (int i = 0; i < size - count; i++) {
          newArr[i] = arr[i];
     }
     size = size - count;
     delete[] arr;
     arr = newArr;
}

int main() {
     int size = 10;
     int* arr = new int[size] {};
     fillArray(arr, size);
     showArray(arr, size);
     pushBack(arr, size, 10);
     showArray(arr, size);
     popBack(arr, size, 2);
     showArray(arr, size);
     delete[] arr;
     return 0;
}
// showArray()
// &arr = 0xf296fffdd0		arr = 0x23b51465aa0		*arr = 8		8(0x23b51465aa0) 9(0x23b51465aa4) 9(0x23b51465aa8) 1(0x23b51465aac) 7(0x23b51465ab0) 5(0x23b51465ab4) 5(0x23b51465ab8) 10(0x23b51465abc) 1(0x23b51465ac0) 0(0x23b51465ac4) 

// showArray()
// &arr = 0xf296fffdd0		arr = 0x23b51466e50		*arr = 8		8(0x23b51466e50) 9(0x23b51466e54) 9(0x23b51466e58) 1(0x23b51466e5c) 7(0x23b51466e60) 5(0x23b51466e64) 5(0x23b51466e68) 10(0x23b51466e6c) 1(0x23b51466e70) 0(0x23b51466e74) 10(0x23b51466e78) 

// showArray()
// &arr = 0xf296fffdd0		arr = 0x23b51465920		*arr = 8		8(0x23b51465920) 9(0x23b51465924) 9(0x23b51465928) 1(0x23b5146592c) 7(0x23b51465930) 5(0x23b51465934) 5(0x23b51465938) 10(0x23b5146593c) 1(0x23b51465940) 