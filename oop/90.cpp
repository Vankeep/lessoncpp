#include <iostream>
#include <string>
using namespace std;
/*
Дружественный метод между 2 классами
*/

// Объявляем класс Apple заранее, чтобы использовать его в классе Human.
class Apple;

class Human {
public:
    void takeApple(Apple& apple);
};

// Класс Apple, представляющий яблоко.
class Apple {
    string color;
    // Делаем метод Human::takeApple дружественным, чтобы он мог обращаться к приватным членам класса Apple.
    friend void Human::takeApple(Apple& apple);
public:
    Apple(const string& color) : color(color) {}
};

// Определение метода takeApple класса Human.
void Human::takeApple(Apple& apple) {
    cout << "takeApple() \"" << apple.color << "\"\n";
}

int main() {
    Apple appleRed("красный"); 
    Human person; 
    person.takeApple(appleRed); 
    return 0; 
}