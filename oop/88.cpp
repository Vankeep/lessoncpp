#include <iostream>
using namespace std;

/*
Дружественные функции и классы
*/
class Point; //Объявление о сушествовании класса Point. Типо прототипа функций.
class Human {
     int age;
     friend void setNillX(Point&);
     friend void show(Point& point, Human& human);
public:
     Human(int age) {
          this->age = age;
     }
};

class Point {
     int x;
     int y;
     
     friend void setNillX(Point&);                     //Класс позволяет функции setNillX пользоваться приватными данными
     friend void show(Point& point, Human& human);     //Класс позволяет функции show пользоваться приватными данными
public:   
     Point(int x, int y) {
          this->x = x;
          this->y = y;
     }
};



void setNillX(Point& val) {
     val.x = 0;
}

void show(Point& point, Human& human) {
     printf("Point {x:%d, y:%d} Human {age:%d}\n", point.x, point.y, human.age);
}

int main() {
     Point point(2, 2);
     Human human(33);
     show(point, human);
     setNillX(point);
     show(point, human);
     return 0;
}

/*
Point {x:2, y:2} Human {age:33}
Point {x:0, y:2} Human {age:33}
*/