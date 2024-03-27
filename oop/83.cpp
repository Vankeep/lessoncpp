#include <iostream>
#include <string>
using namespace std;

/*
Перегрузка оператора присваивания
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