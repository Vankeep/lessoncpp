#include <iostream>
#include <string>
using namespace std;

/*
Перегрузка оператора +
*/

class Point {
     int* arr;
public:
     Point(int x, int y) {
          printf("Конструктор %p\n", this);
          arr = new int[2] {x, y};
     }

     ~Point() {
          printf("Деструктор %p\n", this);
          delete[] this->arr;
     }

     Point operator+(const Point& obj) {
          printf("Перегрузка оператора \"+\"\n");
          Point resp(this->arr[0] + obj.arr[0], this->arr[1] + obj.arr[1]);
          return resp;
     }

     void show() {
          string response = "[" + to_string(arr[0]) + ", " + to_string(arr[1]) + "]";
          printf("show() -> координаты:%p%s\n", arr, response.c_str());
     }

};

int main() {
     Point p1(1, 1);
     Point p2(1, 2);
     p1.show();
     p2.show();
     
     Point p3 = p1 + p2;
     p3.show();
     return 0;
}

/*
Конструктор 00000096d71ff768
Конструктор 00000096d71ff760

show() -> координаты:00000205325a44d0[1, 1]
show() -> координаты:00000205325a44f0[1, 2]

Конструктор 00000096d71ff758

show() -> координаты:00000205325a4510[2, 3]

Деструктор 00000096d71ff758
Деструктор 00000096d71ff760
Деструктор 00000096d71ff768
*/