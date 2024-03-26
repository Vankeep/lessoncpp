#include <iostream>
using namespace std;

/*
слово this

Это указатель созданного обьекта самого на себя
*/

class Point{
     int x;
     int y;
public:
     Point(int x, int y){
          this->x = x;
          this->y = y;
          cout << "Вызван конструктор класса " << this <<endl;
     }
};

int main() {
     Point one(3,9);
     Point two(3,9);
     return 0;
}