#include <iostream>
#include <string>
using namespace std;

/*
Указатели на фунции

тип функции (*имя_указателя)(параметры)
*/
void foo1() { cout << "foo1" << endl; }

void foo2() { cout << "foo2" << endl; }

void foo3(int val) { cout << "foo3 " << val << endl; }

int foo4(int val) { return val - 1; }

string dataFromDb() { return "Data from database"; }

string dataFromWebServer() { return "Data from web server"; }


void showInfo(string(*fun)()) { cout << fun() << endl; }

void showVal(void (*fun)(int), int val) { fun(val); }

int main() {
     void(*fooPointer)() = foo1;
     fooPointer();
     //Консоль: foo1
//---------------------------------------------
     fooPointer = foo2;
     fooPointer();
     //Консоль: foo2
//---------------------------------------------
     void(*fooPArg)(int val) = foo3;
     fooPArg(10);
     //Консоль: foo3 10
//---------------------------------------------
     int(*pointFoo4)(int) = foo4;
     cout << pointFoo4(12) << endl;
     //Консоль: 11
//---------------------------------------------
     showInfo(dataFromDb);
     showInfo(dataFromWebServer);
     //Data from database
     //Data from web server
//---------------------------------------------
     showVal(foo3, 10);
     //10
//---------------------------------------------
     return 0;
}