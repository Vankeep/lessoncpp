#include <iostream>
#include <string>
using namespace std;

/*
Объект класса. Экземпляр класса.
*/
class Human {
private:
     int age;
     string name;
     int* listArr;
     int listArrSize;

     string arrayToStr() {
          string strListArr = "[";
          for (int i = 0; i < listArrSize; i++) {
               strListArr.append(to_string(listArr[i]));
               if (i < listArrSize - 1) strListArr.append(", ");
          }
          strListArr.append("]");
          return strListArr;
     }
public:
     Human() {
          this->age = 0;
          this->name = "No name";
          this->listArrSize = 10;
          this->listArr = new int[listArrSize] {};
          cout << "log -> Создан класс " << this->name << endl;
     }

     Human(string name, int age, int listArrSize = 2, int listArr[] = new int[2] {}) {
          this->age = age;
          this->name = name;
          this->listArrSize = listArrSize;
          this->listArr = listArr;
          cout << "log -> Создан класс " << this->name << endl;
     }

     ~Human() {
          cout << "log -> Уничтожен класс " << this->name << endl;
          delete[] this->listArr;
     }

     string getName() {
          return this->name;
     }

     int* getListArr() {
          return this->listArr;
     }

     string toString() {
          return "Name:" + name + " Age:" + to_string(age) + " List:" + arrayToStr();
     }
};


int main() {
     Human h1;
     Human h2("Tom", 23);
     Human h3("Bob", 21, 2, new int[2] {55, 65});

     cout << endl << "log -> Метод main()" << endl;
     cout << h1.toString() << endl;
     cout << h2.toString() << endl;
     cout << h3.toString() << endl;

     cout << h1.getName() << endl << endl;

     return 0;
}

/*
log -> Создан класс No name
log -> Создан класс Tom
log -> Создан класс Bob

log -> Метод main()
Name:No name Age:0 List:[0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
Name:Tom Age:23 List:[0, 0]
Name:Bob Age:21 List:[55, 65]
No name

log -> Уничтожен класс Bob
log -> Уничтожен класс Tom
log -> Уничтожен класс No name
*/