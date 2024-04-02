#include <iostream>
using namespace std;

/*
static. Статические методы
*/

class Apple {
private:
     static int count;
     int weight;
public:
     Apple(int weight) {
          this->weight = weight;
          count++;
     }
     Apple(const Apple& obj) {
          this->weight = obj.weight;
          count++;
     }
     ~Apple() {
          count--;
     }

     int getWeight() {
          return this->weight;
     }

     static int getCount() {
          return count;
     }

     static void changeWeight(Apple& obj, int weight) {
          obj.weight = weight;
     }
};
int Apple::count = 0; // Это инициализация счетчика


void test(Apple a) {
     printf("test\n");
}

int main() {
     cout << Apple::getCount() << endl;
     Apple a1(12);
     Apple a2(13);
     cout << Apple::getCount() << ", " << a1.getWeight() << endl;
     test(a1);
     cout << Apple::getCount() << ", " << a2.getWeight() << endl;

     cout << a1.getWeight() << endl;
     Apple::changeWeight(a1, 333);
     cout << a1.getWeight() << endl;

     return 0;
}

/*
0
2, 12
test
2, 13
12
333
*/