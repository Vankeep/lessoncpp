#include <iostream>
#include <string>
using namespace std;

/*
Вложенные классы. inner class
*/

class Image {
public:
     void getImageInfo(){
          for (int i = 0; i < length; i++){
               cout << pixels[i].toString() << endl;
          }                   
     }
private:
     class Pixel {
     public:
          Pixel(int r, int g, int b) {
               this->r = r;
               this->g = g;
               this->b = b;
          }
          string toString() {
               return "RGB =  " + to_string(r) + ", " + to_string(g) + ", " + to_string(b);
          }
     private:
          int r, g, b;
     };

     static const int length = 5;

     Pixel pixels[length]{
          Pixel(2,43,2),
          Pixel(3,98,5),
          Pixel(2,4,64),
          Pixel(5,3,20),
          Pixel(11,2,2)
     };
};


int main() {
     Image img;
     img.getImageInfo();
     return 0;
}

/*
RGB =  2, 43, 2
RGB =  3, 98, 5
RGB =  2, 4, 64
RGB =  5, 3, 20
RGB =  11, 2, 2
*/