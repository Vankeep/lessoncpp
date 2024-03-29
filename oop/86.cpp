#include <iostream>
using namespace std;

/*
 Перегрузка операторов ++ --
*/

class Point {
     int x;
     int y;

public:
     Point(int x, int y) {
          this->x = x;
          this->y = y;
     }
     // Префиксный инкремент
     Point& operator++() {
          ++x;
          ++y;
          return *this;
     }

     // Постфиксный инкремент
     Point operator++(int) {
          Point temp(*this);
          this->x++;
          this->y++;
          return temp;
     }
      // Префиксный декримент
     Point& operator--() {
          --x;
          --y;
          return *this;
     }

     // Постфиксный декримент
     Point operator--(int) {
          Point temp(*this);
          this->x--;
          this->y--;
          return temp;
     }
      // Перегрузка оператора <<
     friend ostream& operator<<(ostream& os, const Point& p) {
          os << "{" << p.x << ", " << p.y << "}";
          return os;
     }
};

int main() {
     Point a(2, 3);
     cout << a << endl;
     cout << a++ << endl;
     cout << --a << endl;
     return 0;
}