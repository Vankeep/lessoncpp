#include <string>
using namespace std;

/*
Конструктор копирования

Если конструктор копирования не определен то он копирует побитово. 
И про вызове деструктора удалиться масссив из пямяти после закрытия метода foo. 
Чтобы избежать потери массива надо переопределить конструктор копирования и создать новый массив
в новой области динамической памяти.
*/

class MyClass {
     int* data;
     int size;
public:
     MyClass(int size) {
          this->size = size;
          this->data = new int[size];
          for (int i = 0; i < size; i++){
               this->data[i] = i;
          }
          printf("Вызван конструктор\t\t\t\t\t\t\t\t%p\tАдрес масссива:%p\n", this, data);
     }

     MyClass(const MyClass &copyObj){
          this->size = copyObj.size;
          this->data = new int[size];
          for (int i = 0; i < this->size; i++){
               this->data[i] = copyObj.data[i];
          }
          printf("Вызван конструктор копирования \t\t%p\tАдрес масссива:%p\n", this, data);
     }

     ~MyClass() {
          printf("Вызван деструктор\t\t\t\t\t\t\t\t\t%p\tАдрес масссива:%p\n", this, data);
          delete[] data;
     }
};
//     Вот тут происходит вызов коструктора копирования (MyClass val). val это скопированный объект.
void foo(MyClass val){                  
     printf("Вызвана функция foo.\n");
}

int main() {
     MyClass one(2);
     foo(one);
     return 0;
}

/*
Вызван конструктор			     000000c130fffa80	Адрес масссива:0000027350ea4190
Вызван конструктор копирования 	000000c130fffa90	Адрес масссива:0000027350e9a320
Вызвана функция foo.
Вызван деструктор				000000c130fffa90	Адрес масссива:0000027350e9a320
Вызван деструктор				000000c130fffa80	Адрес масссива:0000027350ea4190
*/
