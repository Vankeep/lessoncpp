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

     string arrayToStr(){
          string strListArr = "[";
          for (int i = 0; i < listArrSize; i++){
               strListArr.append(to_string(listArr[i]));
               if (i < listArrSize -1) strListArr.append(", ");
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
     }

     Human(string name, int age,int listArrSize = 2, int listArr[] = new int[2] {}) {
          this->age = age;
          this->name = name;
          this->listArrSize = listArrSize;
          this->listArr = listArr;
     }

     ~Human(){
          cout << "Уничтожен класс " << this->name <<endl;
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
     
     cout << h1.toString() << endl;
     cout << h2.toString() << endl;
     cout << h3.toString() << endl;
     
     cout << h1.getName() << endl;

     return 0;
}

