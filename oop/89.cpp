#include <iostream>
#include <string>
using namespace std;

/*
Вынос реализации метода вне класса
*/
class MyClass{
private:
     string message;
public:
     MyClass(string);
     void show();

};

MyClass::MyClass(string message){
     this->message = message;
}

void MyClass::show(){
     printf("%s\n", this->message.c_str());
}



int main() {
     MyClass a("Hello");
     a.show();
     return 0;
}