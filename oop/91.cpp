#include <iostream>
using namespace std;

/*
Дружественные классы
*/

class Human{
     int age;
public:
     friend class Gud;  // Gud доступен весь класс Human
     Human(int age){
          this->age = age;
     }

     void showAge(){
          printf("Age = %d\n", this->age);
     };
};

class Gud{
public:
     void setAge(int val, Human* h){
          h->age = val;
     }

};

int main() {
     Human person(32);
     Gud gud;

     person.showAge();
     gud.setAge(33, &person);
     person.showAge();
     return 0;
}