#include <iostream>
#include <string>
using namespace std;

/*
Перегрузка операторов == и !=
*/
class Point {
     int* arr;
     string nameVector;
public:
     Point(string nameVector, int x, int y) {
          this->arr = new int[2] {x, y};
          this->nameVector = nameVector;
          printf("Конструктор %p\n", this);
     }

     ~Point() {
          delete[] this->arr;
          printf("Деструктор %p\n", this);
     }

     bool operator==(const Point& obj) {
          return (arr[0] == obj.arr[0] && arr[1] == obj.arr[1] && nameVector == obj.nameVector);
     }

     bool operator!=(const Point& obj) {
          return !operator==(obj);
     }

     void show() {
          string response = "[" + to_string(arr[0]) + ", " + to_string(arr[1]) + "]";
          printf("show() ->  имя:%s, координаты:%p%s\n", this->nameVector.c_str(), arr, response.c_str());
     }
};

int main() {
     Point p1("P1", 5, 2);
     Point p2("P2", 3, 2);

     p1.show();
     p2.show();

     cout << "Объкты равны? Ответ:" << (p1 == p2) << endl;
     cout << "Объкты равны? Ответ:" << (p1 != p2) << endl;

     return 0;
}

/*
Конструктор 00000073d43ffbb0
Конструктор 00000073d43ffb80

show() ->  имя:P1, координаты:000002261d533ba0[5, 2]
show() ->  имя:P2, координаты:000002261d533bc0[3, 2]

Объкты равны? Ответ:0
Объкты равны? Ответ:1

Деструктор 00000073d43ffb80
Деструктор 00000073d43ffbb0
*/