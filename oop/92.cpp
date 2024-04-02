#include <iostream>
using namespace std;

/*
static. Статические поля класса
*/

class Apple {

     int weight;
public:
     static int count; // Эта переменная единая для всех обьектов. Используем это для подсчета количества созданных обьектов;
     Apple(int weight) {
          this->weight = weight;
          count++;
     }
     Apple(const Apple& obj) {
          this->weight = obj.weight;
          count ++;
     }
     ~Apple() {
          count--;
     }
};

int Apple::count = 0; // Это инициализация счетчика

void test(Apple a) {
     printf("test\n");
}

int main() {
     cout << Apple::count << endl;
     Apple a1(12);
     Apple a2(13);
     cout << Apple::count << endl;
     test(a1);
     cout << Apple::count << endl;
     return 0;
}