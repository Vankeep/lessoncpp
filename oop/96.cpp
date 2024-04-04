#include <iostream>
using namespace std;

/*
Массив объектов класса
*/

class Pixel {
public:
     Pixel(int x = 0, int y = 0) : x(x), y(y) {}

     void showCoordinate();
private:
     int x;
     int y;

};

void Pixel::showCoordinate() {
     cout << this->x << " " << this->y << endl;
}

int main() {
     int size = 3;
///////////////////////
     Pixel pixels[size]{
          Pixel(),
          Pixel(1,2),
          Pixel(33,98)
     };
     for (int i = 0; i < size; i++) {
          pixels[i].showCoordinate();
     }
////////////////////////
     Pixel* dynamicPixels = new Pixel[size]{
          Pixel(34,2),
          Pixel(11,1),
          Pixel(2,7)
     };
     for (int i = 0; i < size; i++) {
          dynamicPixels[i].showCoordinate();
     }
     delete[] dynamicPixels;
///////////////////////
     return 0;
}

/*

0 0
1 2
33 98

34 2
11 1
2 7

*/