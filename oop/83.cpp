#include <iostream>
#include <string>
using namespace std;

/*
Перегрузка оператора =
*/

class Point {
     int* arr;
     int size;
public:
     Point(int size) {
          printf("Конструктор %p\n", this);
          this->size = size;
          this->arr = new int[size];
          for (int i = 0; i < size; i++)
               this->arr[i] = i;
     }
     Point operator=(const Point& copyObj) {
          printf("Перегрузка оператора \"=\" %p\n",this);
          this->size = copyObj.size;
          this->arr = new int[copyObj.size] {};
          for (int i = 0; i < this->size; i++) {
               this->arr[i] = copyObj.arr[i];
          }
          return *this;
     }
     ~Point() {
          printf("Деструктор %p\n", (uintptr_t)this);
          delete[] this->arr;
     }

     void show() {
          string response;
          for (int i = 0; i < size; i++) {
               response.append(to_string(arr[i]));
               if (i < (size - 1)) response.append(", ");
          }
          response.append("]");
          printf("toString() ->  адрес: %p, массив:[%s\n", arr, response.c_str());
     }

};


int main() {
     Point p1(3);
     Point p2(5);
     p1.show();
     p2.show();

     p1 = p2;

     p1.show();
     p2.show();
     return 0;
}

/*
Конструктор 000000724e9ffc10
Конструктор 000000724e9ffc00

toString() ->  адрес: 00000179881469a0, массив:[0, 1, 2]
toString() ->  адрес: 0000017988140cc0, массив:[0, 1, 2, 3, 4]

Перегрузка оператора "=" 000000724e9ffc10

Деструктор 000000724e9ffc20

toString() ->  адрес: 00000179881418c0, массив:[0, 1, 2, 3, 4]
toString() ->  адрес: 0000017988140cc0, массив:[0, 1, 2, 3, 4]

Деструктор 000000724e9ffc00
Деструктор 000000724e9ffc10
*/