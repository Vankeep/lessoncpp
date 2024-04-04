#include <iostream>
#include <string>
using namespace std;

/*
Агрегация и композиция
*/

class Cap {
public:
     string& getColor() {
          return color;
     }
private:
     string color = "Красный";
};



class Human {
public:
     void think() {
          brain.think();
     }
     void showColorCap() {
          cout << "Моя кепка цвета: " << cap.getColor() << endl;
     }
private:
     class Brain {
     public:
          void think() {
               cout << "Я думаю" << endl;
          }
     };
     Brain brain;
     Cap cap;
};


int main() {
     Human human;
     human.think();           // композиция
     human.showColorCap();    // агрегация

     return 0;
}